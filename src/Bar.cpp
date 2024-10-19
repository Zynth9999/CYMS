#include "Bar.h"

Bar::Bar(int x, int y, int width, int height, int minValue, int maxValue, int borderColor, int insideColor) {
  _x = x;
  _y = y;
  _width = width;
  _height = height;
  _value = minValue;  // Initialize to minValue
  _borderColor = borderColor;
  _insideColor = insideColor;
  _minValue = minValue;
  _maxValue = maxValue;
}

void Bar::draw(BB_SPI_LCD &lcd) {
  lcd.drawRect(_x, _y, _width, _height, _borderColor);  // Bar border
  
  // Calculate the proportional width of the bar based on the value
  int filledWidth = ((_value - _minValue) * (_width - 2)) / (_maxValue - _minValue);
  
  lcd.fillRect(_x + 1, _y + 1, filledWidth, _height - 2, _insideColor);  // Filled portion
  lcd.fillRect(_x + 1 + filledWidth, _y + 1, _width - 2 - filledWidth, _height - 2, _borderColor);  // Remaining portion
  
  // Set the cursor in the middle of the bar
  lcd.setCursor(_x + (_width / 2), _y + (_height / 2));
  
  // Determine if the inside color is dark or light
  uint8_t r = (_insideColor >> 11) & 0x1F;  // Extract red component (5 bits)
  uint8_t g = (_insideColor >> 5) & 0x3F;   // Extract green component (6 bits)
  uint8_t b = _insideColor & 0x1F;          // Extract blue component (5 bits)
  
  // Scale RGB values to 8 bits
  r = (r * 255) / 31;
  g = (g * 255) / 63;
  b = (b * 255) / 31;

  // Calculate luminance using the formula: 
  // Luminance = 0.299 * R + 0.587 * G + 0.114 * B
  int luminance = (int)(0.299 * r + 0.587 * g + 0.114 * b);

  // Set text color based on luminance
  if (luminance > 128) {
    lcd.setTextColor(TFT_BLACK, _insideColor);  // Light background, use black text
  } else {
    lcd.setTextColor(TFT_WHITE, _insideColor);  // Dark background, use white text
  }

  lcd.print(_value);
}


void Bar::setValue(int value) {
  // Constrain value within min and max
  if (value > _maxValue) {
    _value = _maxValue;
  } else if (value < _minValue) {
    _value = _minValue;
  } else {
    _value = value;
  }
}

int Bar::getValue() {
  return _value;
}

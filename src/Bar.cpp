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

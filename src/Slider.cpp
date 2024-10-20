#include "Slider.h"

Slider::Slider(int x, int y, int width, int height, int minVal, int maxVal, int color, int bgColor) {
  _x = x;
  _y = y;
  _width = width;
  _height = height;
  _minVal = minVal;
  _maxVal = maxVal;
  _value = minVal;
  _color = color;
  _bgColor = bgColor;
}

void Slider::draw(BB_SPI_LCD &lcd) {
  // Draw slider background
  lcd.drawRect(_x, _y, _width, _height, _bgColor);

  // Calculate thumb position based on current value
  int sliderPos = _x + ((_value - _minVal) * (_width - 5)) / (_maxVal - _minVal); // Adjusted to avoid exceeding bounds

  // Draw slider thumb (5 pixels wide)
  lcd.fillRect(sliderPos, _y, 5, _height, _color);

  // Fill the inside with the bg color
  lcd.fillRect(_x + 1, _y, _width - 2, _height, _bgColor);

}

void Slider::setValue(int value) {
  if (value >= _minVal && value <= _maxVal) {
    _value = value;
  }
}

int Slider::getValue() {
  return _value;
}

bool Slider::contains(int tx, int ty) {
  return (tx >= _x && tx <= (_x + _width) && ty >= _y && ty <= (_y + _height));
}

bool Slider::handleTouch(int tx, int ty) {
  if (contains(tx, ty)) {
    // Calculate new value based on touch position relative to the slider width
    int newValue = _minVal + ((tx - _x) * (_maxVal - _minVal)) / (_width - 5); // Adjust for thumb width
    setValue(newValue); // Update slider value
    return true;
  }
  return false;
}

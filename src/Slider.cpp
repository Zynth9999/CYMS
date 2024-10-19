// Slider.cpp
#include "Slider.h"

Slider::Slider(int x, int y, int width, int height, int minVal, int maxVal) {
  _x = x;
  _y = y;
  _width = width;
  _height = height;
  _minVal = minVal;
  _maxVal = maxVal;
  _value = minVal;
}

void Slider::draw(BB_SPI_LCD &lcd) {
  lcd.drawRect(_x, _y, _width, _height, TFT_WHITE); // Slider background
  int sliderPos = _x + ((_value - _minVal) * _width) / (_maxVal - _minVal);
  lcd.fillRect(sliderPos, _y, 5, _height, TFT_BLUE); // Slider thumb
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

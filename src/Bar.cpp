// Bar.cpp
#include "Bar.h"

Bar::Bar(int x, int y, int width, int height, int borderColor, int insideColor) {
  _x = x;
  _y = y;
  _width = width;
  _height = height;
  _value = 0;
  _borderColor = borderColor;
  _insideColor = insideColor;
}

void Bar::draw(BB_SPI_LCD &lcd) {
  lcd.drawRect(_x, _y, _width, _height, _borderColor);  // Bar border
  lcd.fillRect(_x+1, _y+1, _value-2, _height-2, _insideColor);  // Bar background
}

void Bar::setValue(int value) {
  if(!value >= _width+2 || !value <= 0) {
    _value = value;
  } else {
    _value = _width+2;
  }
}

int Bar::getValue() {
  return _value;
}

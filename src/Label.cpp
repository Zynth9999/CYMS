#include "Label.h"

Label::Label(int x, int y, const char* text) {
  _x = x;
  _y = y;
  _text = text;
}

void Label::draw(BB_SPI_LCD &lcd, uint16_t color, uint16_t bgColor) {
  lcd.setTextColor(color, bgColor);
  lcd.setCursor(_x, _y);
  lcd.print(_text);
}

void Label::setText(const char* text) {
  _text = text;
}

const char* Label::getText() {
  return _text;
}

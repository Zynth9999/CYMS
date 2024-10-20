#include "Label.h"

Label::Label(int x, int y, int fontSize, int color, int bgColor, const char* text) {
  _x = x;
  _y = y;
  _text = text;
  _color = color;
  _bgColor = bgColor;
  _fontSize = fontSize;
}

void Label::draw(BB_SPI_LCD &lcd) {
  lcd.setTextColor(_color, _bgColor);
  lcd.setCursor(_x, _y);
  lcd.setTextSize(_fontSize);
  lcd.print(_text);
}

void Label::setText(const char* text) {
  _text = text;
}

const char* Label::getText() {
  return _text;
}

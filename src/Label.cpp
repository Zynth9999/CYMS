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
  if(_fontSize == 1){
    lcd.setFont(FONT_6x8);
  }
  else if(_fontSize == 2){
    lcd.setFont(FONT_8x8);
  }
  else if(_fontSize == 3){
    lcd.setFont(FONT_12x16);
  }
  else if(_fontSize == 4){
    lcd.setFont(FONT_16x16);
  }
  else if(_fontSize == 5){
    lcd.setFont(FONT_16x32);
  }
  
  lcd.print(_text);
}

void Label::setText(const char* text) {
  _text = text;
}

const char* Label::getText() {
  return _text;
}

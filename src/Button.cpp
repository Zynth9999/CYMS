#include "Button.h"
#include "Style.h"
Button::Button(int x, int y, int w, int h, Style style, const char* label) {
  _x = x;
  _y = y;
  _w = w;
  _h = h;
  _label = label;
  _callback = NULL;

  _color = style._buttonColor;
  _bgColor = style._buttonBgColor;
  _radius = style._radius;  // Corrected from _buttonRadius to _radius


  _fontSize = style._buttonFontSize;
}

void Button::draw(BB_SPI_LCD &lcd) {
  lcd.fillRoundRect(_x, _y, _w, _h, _radius, _bgColor);  // Draw button background
  lcd.setTextColor(_color, _bgColor);
  lcd.setCursor(_x + 10, _y + 10);  // Adjust position as needed
  lcd.print(_label);  // Print label
}

bool Button::contains(int tx, int ty) {
  return (tx >= _x && tx <= (_x + _w) && ty >= _y && ty <= (_y + _h));
}

void Button::setLabel(const char* label) {
  _label = label;
}

void Button::setCallback(void (*callback)()) {
  _callback = callback;
}

void Button::onTouch() {
  if (_callback != NULL) {
    _callback();
  }
}

const char* Button::getLabel() {
  return _label;
}

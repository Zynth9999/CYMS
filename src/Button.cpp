#include "Button.h"

Button::Button(int x, int y, int w, int h, const char* label) {
  _x = x;
  _y = y;
  _w = w;
  _h = h;
  _label = label;
}

void Button::draw(BB_SPI_LCD &lcd, uint16_t color, uint16_t bgColor) {
  lcd.fillRect(_x, _y, _w, _h, bgColor);  // Draw button background
  lcd.setTextColor(color, bgColor);
  lcd.setCursor(_x + 10, _y + 10);  // Adjust position as needed
  lcd.print(_label);  // Print label
}

bool Button::contains(int tx, int ty) {
  return (tx >= _x && tx <= (_x + _w) && ty >= _y && ty <= (_y + _h));
}

void Button::setLabel(const char* label) {
  _label = label;
}

const char* Button::getLabel() {
  return _label;
}

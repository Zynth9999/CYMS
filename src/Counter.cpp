// Counter.cpp
#include "Counter.h"

Counter::Counter(int x, int y, int initialValue) {
  _x = x;
  _y = y;
  _value = initialValue;
}

void Counter::draw(BB_SPI_LCD &lcd) {
  lcd.setCursor(_x, _y);
  lcd.setTextColor(TFT_WHITE, TFT_BLACK);
  lcd.print(_value);
}

void Counter::increment() {
  _value++;
}

void Counter::decrement() {
  _value--;
}

int Counter::getValue() {
  return _value;
}

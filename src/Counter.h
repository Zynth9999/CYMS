// Counter.h
#ifndef COUNTER_H
#define COUNTER_H

#include "Arduino.h"
#include <bb_spi_lcd.h>

class Counter {
  public:
    Counter(int x, int y, int initialValue);
    void draw(BB_SPI_LCD &lcd);
    void increment();
    void decrement();
    int getValue();

  private:
    int _x, _y;
    int _value;
};

#endif

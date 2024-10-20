// Graph.h
#ifndef BAR_H
#define BAR_H

#include "Arduino.h"
#include <bb_spi_lcd.h>
#include "Style.h"
class Bar {
  public:
    Bar(int x, int y, int width, int height, int minValue, int maxValue, Style style);
    void draw(BB_SPI_LCD &lcd);
    void setValue(int value);
    int getValue();

  private:
    int _x, _y, _width, _height;
    int _value;
    int _borderColor, _insideColor;
    int _minValue, _maxValue;
    Style _style;
};

#endif

// Slider.h
#ifndef SLIDER_H
#define SLIDER_H

#include "Arduino.h"
#include <bb_spi_lcd.h>

class Slider {
  public:
    Slider(int x, int y, int width, int height, int minVal, int maxVal, int color, int bgColor);
    void draw(BB_SPI_LCD &lcd);
    void setValue(int value);
    int getValue();
    bool contains(int tx, int ty);
    bool handleTouch(int tx, int ty);

  private:
    int _x, _y, _width, _height;
    int _minVal, _maxVal;
    int _value;
    int _color, _bgColor;
};

#endif

#ifndef SLIDER_H
#define SLIDER_H

#include "BB_SPI_LCD.h"
#include "Label.h"

class Slider {
  public:
    Slider(int x, int y, int width, int height, int minVal, int maxVal, Label* label, int color, int bgColor);

    void draw(BB_SPI_LCD &lcd);
    void setValue(int value);
    int getValue();
    bool contains(int tx, int ty);
    bool handleTouch(int tx, int ty);

  private:
    int _x, _y, _width, _height, _minVal, _maxVal, _value, _color, _bgColor;
    Label* _label;  // Pointer to the label
};

#endif

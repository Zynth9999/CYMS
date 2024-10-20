#ifndef LABEL_H
#define LABEL_H

#include "Arduino.h"
#include <bb_spi_lcd.h>

class Label {
  public:
    Label(int x, int y, int fontSize, int color, int bgColor, const char* text);
    void draw(BB_SPI_LCD &lcd);
    void setText(const char* text);
    const char* getText();
  private:
    int _x, _y;
    const char* _text;
    int _fontSize;
    int _color, _bgColor;
};

#endif  // LABEL_H

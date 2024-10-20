#ifndef LABEL_H
#define LABEL_H

#include "Arduino.h"
#include <bb_spi_lcd.h>
#include "Style.h"
class Label {
  public:
    Label(int x, int y, Style style, const char* text);
    void draw(BB_SPI_LCD &lcd);
    void setText(const char* text);
    const char* getText();
  private:
    int _x, _y;
    const char* _text;
    int _fontSize;
    int _color, _bgColor;
    Style _style;
};

#endif  // LABEL_H

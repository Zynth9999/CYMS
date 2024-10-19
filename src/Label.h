#ifndef LABEL_H
#define LABEL_H

#include "Arduino.h"
#include <bb_spi_lcd.h>

class Label {
  public:
    Label(int x, int y, int color, int bgColor, const char* text);
    void draw(BB_SPI_LCD &lcd, uint16_t color, uint16_t bgColor);
    void setText(const char* text);
    const char* getText();
  private:
    int _x, _y;
    const char* _text;
};

#endif  // LABEL_H

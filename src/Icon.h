// Icon.h
#ifndef ICON_H
#define ICON_H

#include "Arduino.h"
#include <bb_spi_lcd.h>

class Icon {
  public:
    Icon(int x, int y, const uint8_t iconData[16][16], bool inverted);
    void draw(BB_SPI_LCD &lcd);

  private:
    int _x, _y;
    const uint8_t (*_iconData)[16];
    bool _inverted;
};

#endif

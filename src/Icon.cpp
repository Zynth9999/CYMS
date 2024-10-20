// Icon.cpp
#include "Icon.h"

Icon::Icon(int x, int y, const uint8_t iconData[16][16], bool inverted) {
  _x = x;
  _y = y;
  _iconData = iconData;
  _inverted = inverted;
}

void Icon::draw(BB_SPI_LCD &lcd) {
  for (int i = 0; i < 16; i++) {
    for (int j = 0; j < 16; j++) {
      if (_iconData[i][j] == 1) {
        lcd.drawPixel(_x + j, _y + i, _inverted ? TFT_WHITE : TFT_BLACK);
      }
    }
  }
}

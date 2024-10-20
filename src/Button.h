#ifndef BUTTON_H
#define BUTTON_H

#include "Arduino.h"
#include <bb_spi_lcd.h>  // Include the bb_SPI_LCD library
#include "Style.h"
class Button {
  public:
    Button(int x, int y, int w, int h, Style style, const char* label);  // Constructor
    void draw(BB_SPI_LCD &lcd);  // Draw the button
    bool contains(int tx, int ty);  // Check if touch coordinates are inside the button
    void setLabel(const char* label);  // Set the button label
    const char* getLabel();  // Get the button label
    void onTouch();  // Call the button callback
    void setCallback(void (*callback)());  // Set the button callback
  private:
    void (*_callback)();
    int _x, _y, _w, _h;
    int _Style;
    int _fontSize;
    uint16_t _color, _bgColor, _radius;
    const char* _label;
};

#endif  // BUTTON_H

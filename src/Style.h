#ifndef STYLE_H
#define STYLE_H

#include "Arduino.h"

class Style {

    public:
        // Style constructor
        // Label Font Size, Label Color, Label Background Color, Slider Font Size, Slider Thumb Color, Slider Background Color, Button Font Size, Button Text Color, Button Background Color, Button Radius, Bar Color, Bar Background Color, Bar Font Size
        Style(int fontSize, int labelColor, int bgColor, int sliderThumbShape, int sliderColor, int sliderBgColor, int buttonFontSize, int buttonColor, int buttonBgColor, int radius, int barColor, int barBgColor, int barFontSize);

        int _fontSize, _labelColor, _bgColor, _sliderThumbShape, _sliderColor, _sliderBgColor, _buttonFontSize, _buttonColor, _buttonBgColor, _radius, _barColor, _barBgColor, _barFontSize;

}
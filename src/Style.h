#ifndef STYLE_H
#define STYLE_H

#include "Arduino.h"

class Style {
    public:
        // Default constructor
        Style() : _fontSize(0), _labelColor(0), _bgColor(0), _sliderThumbShape(0), _sliderColor(0), _sliderBgColor(0), 
                  _buttonFontSize(0), _buttonColor(0), _buttonBgColor(0), _radius(0), _barColor(0), _barBgColor(0), _barFontSize(0) {}

        // Parameterized constructor
        Style(int fontSize, int labelColor, int bgColor, int sliderThumbShape, int sliderColor, int sliderBgColor, 
              int buttonFontSize, int buttonColor, int buttonBgColor, int radius, int barColor, int barBgColor, int barFontSize)
            : _fontSize(fontSize), _labelColor(labelColor), _bgColor(bgColor), _sliderThumbShape(sliderThumbShape),
              _sliderColor(sliderColor), _sliderBgColor(sliderBgColor), _buttonFontSize(buttonFontSize),
              _buttonColor(buttonColor), _buttonBgColor(buttonBgColor), _radius(radius), _barColor(barColor),
              _barBgColor(barBgColor), _barFontSize(barFontSize) {}

        int _fontSize, _labelColor, _bgColor, _sliderThumbShape, _sliderColor, _sliderBgColor;
        int _buttonFontSize, _buttonColor, _buttonBgColor, _radius, _barColor, _barBgColor, _barFontSize;
};


// Constructor implementation can be added to the .cpp file if needed.

#endif  // STYLE_H

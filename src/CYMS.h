#ifndef CYMS_H
#define CYMS_H

#include "Arduino.h"
#include "Button.h"
#include "Label.h"
#include "Slider.h"
#include "Counter.h"
#include "Graph.h"
#include "Icon.h"
#include <bb_spi_lcd.h>

class CYMS {
  public:
    CYMS(BB_SPI_LCD *lcd);
    void addButton(Button* button);
    void addLabel(Label* label);
    void addSlider(Slider* slider);
    void addCounter(Counter* counter);
    void addGraph(Graph* graph);
    void addIcon(Icon* icon);
    void render();
    void handleTouch(int tx, int ty);
  
  private:
    BB_SPI_LCD *_lcd;
    Button* _buttons[10];
    Label* _labels[10];
    Slider* _sliders[10];
    Counter* _counters[10];
    Graph* _graphs[10];
    Icon* _icons[10];
    int _buttonCount;
    int _labelCount;
    int _sliderCount;
    int _counterCount;
    int _graphCount;
    int _iconCount;
};

#endif  // CYMS_H

// Graph.h
#ifndef GRAPH_H
#define GRAPH_H

#include "Arduino.h"
#include <bb_spi_lcd.h>

class Graph {
  public:
    Graph(int x, int y, int width, int height);
    void draw(BB_SPI_LCD &lcd);
    void addDataPoint(int value);

  private:
    int _x, _y, _width, _height;
    int _data[10];  // Example graph data
    int _dataCount;
};

#endif

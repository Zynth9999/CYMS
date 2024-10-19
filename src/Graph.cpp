// Graph.cpp
#include "Graph.h"

Graph::Graph(int x, int y, int width, int height) {
  _x = x;
  _y = y;
  _width = width;
  _height = height;
  _dataCount = 0;
}

void Graph::draw(BB_SPI_LCD &lcd) {
  lcd.drawRect(_x, _y, _width, _height, TFT_WHITE);  // Graph border
  for (int i = 0; i < _dataCount - 1; i++) {
    int x1 = _x + (i * (_width / 10));
    int y1 = _y + (_height - (_data[i] * _height / 100));
    int x2 = _x + ((i + 1) * (_width / 10));
    int y2 = _y + (_height - (_data[i + 1] * _height / 100));
    lcd.drawLine(x1, y1, x2, y2, TFT_BLUE);
  }
}

void Graph::addDataPoint(int value) {
  if (_dataCount < 10) {
    _data[_dataCount++] = value;
  } else {
    for (int i = 0; i < 9; i++) {
      _data[i] = _data[i + 1];
    }
    _data[9] = value;
  }
}

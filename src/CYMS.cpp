#include "CYMS.h"

CYMS::CYMS(BB_SPI_LCD *lcd) {
  _lcd = lcd;
  _buttonCount = 0;
  _labelCount = 0;
  _sliderCount = 0;
  _counterCount = 0;
  _barCount = 0;
  _iconCount = 0;
}

void CYMS::addWidget(void* widget) {
  if (Button* button = dynamic_cast<Button*>(widget)) {
    if (_buttonCount < 25) {
      _buttons[_buttonCount++] = button;
    }
  } else if (Label* label = dynamic_cast<Label*>(widget)) {
    if (_labelCount < 25) {
      _labels[_labelCount++] = label;
    }
  } else if (Slider* slider = dynamic_cast<Slider*>(widget)) {
    if (_sliderCount < 10) {
      _sliders[_sliderCount++] = slider;
    }
  } else if (Counter* counter = dynamic_cast<Counter*>(widget)) {
    if (_counterCount < 4) {
      _counters[_counterCount++] = counter;
    }
  } else if (Bar* bar = dynamic_cast<Bar*>(widget)) {
    if (_barCount < 10) {
      _bars[_barCount++] = bar;
    }
  } else if (Icon* icon = dynamic_cast<Icon*>(widget)) {
    if (_iconCount < 10) {
      _icons[_iconCount++] = icon;
    }
  }
}


void CYMS::render() {
  // Render buttons
  for (int i = 0; i < _buttonCount; i++) {
    _buttons[i]->draw(*_lcd);
  }

  // Render labels
  for (int i = 0; i < _labelCount; i++) {
    _labels[i]->draw(*_lcd);
  }

  // Render sliders
  for (int i = 0; i < _sliderCount; i++) {
    _sliders[i]->draw(*_lcd);
  }

  // Render counters
  for (int i = 0; i < _counterCount; i++) {
    _counters[i]->draw(*_lcd);
  }

  // Render bars
  for (int i = 0; i < _barCount; i++) {
    _bars[i]->draw(*_lcd);
  }
  // Render icons
  for (int i = 0; i < _iconCount; i++) {
    _icons[i]->draw(*_lcd);
  }
}

void CYMS::handleTouch(int tx, int ty) {

  for (int i = 0; i < _buttonCount; i++) {
    if (_buttons[i]->contains(tx, ty)) {
      _buttons[i]->onTouch();  // Handle button touch event
      return;
    }
  }

  for (int i = 0; i < _sliderCount; i++) {
    if (_sliders[i]->handleTouch(tx, ty)) {  // Update slider value if touched
      _sliders[i]->draw(_lcd);  // Redraw slider with updated value
      return;
    }
  }
}

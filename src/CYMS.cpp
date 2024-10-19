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

void CYMS::addButton(Button* button) {
  if (_buttonCount < 25) {
    _buttons[_buttonCount++] = button;
  }
}

void CYMS::addLabel(Label* label) {
  if (_labelCount < 25) {
    _labels[_labelCount++] = label;
  }
}

void CYMS::addSlider(Slider* slider) {
  if (_sliderCount < 10) {
    _sliders[_sliderCount++] = slider;
  }
}

void CYMS::addCounter(Counter* counter) {
  if (_counterCount < 4) {
    _counters[_counterCount++] = counter;
  }
}

void CYMS::addBar(Bar* bar) {
  if (_barCount < 10) {
    _bars[_barCount++] = bar;
  }
}

void CYMS::addIcon(Icon* icon) {
  if (_iconCount < 10) {
    _icons[_iconCount++] = icon;
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
      // Example touch event for buttons
      _buttons[i]->onTouch();
    }
  }

  // Add touch handlers for sliders, counters, etc. if necessary
}

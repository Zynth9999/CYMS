#include <bb_spi_lcd.h>
#include <CYMS.h>

BB_SPI_LCD lcd;
CYMS menu(&lcd);


const uint8_t iconData[16][16] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

Style exampleStyle(2, TFT_WHITE, TFT_BLACK, 0, TFT_GREEN, TFT_RED, 3, TFT_BLACK, TFT_BLUE, 50, TFT_BLUE, TFT_WHITE, 2);
Button btn1(102, 0, 100, 40, exampleStyle, "+");
Button btn2(0, 0, 100, 40, exampleStyle, "-");
Bar bar(0,42, 202, 25, 0, 10, exampleStyle);
Label lbl1(202, 69, exampleStyle, "Value");
Slider slider(0, 69, 200, 25, 0, 10, exampleStyle);
Icon icon(80, 80, iconData, false);

void setup() {
  Serial.begin(115200);
  lcd.begin(DISPLAY_CYD_2USB);
  lcd.rtInit(32, 39, 25, 33);  // Example touch pins
  lcd.fillScreen(TFT_BLACK);
  menu.addButton(&btn1);
  btn1.setCallback([]() {
    delay(50);
    bar.setValue(bar.getValue() + 1);
    menu.render();
  });
  menu.addButton(&btn2);
  btn2.setCallback([]() {
    delay(50);
    bar.setValue(bar.getValue() - 1);
    menu.render();
  });
  menu.addBar(&bar);
  menu.addSlider(&slider);
  menu.addIcon(&icon);
  menu.addLabel(&lbl1);
  menu.render();  // Render the menu
}

void loop() {
  TOUCHINFO ti;
  if (lcd.rtReadTouch(&ti)) {
    lbl1.setText(String(bar.getValue()).c_str());
    menu.handleTouch(ti.x[0], ti.y[0]);  // Handle touch events
  }
}

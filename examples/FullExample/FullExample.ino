#include <bb_spi_lcd.h>
#include <CYMS.h>

BB_SPI_LCD lcd;
CYMS menu(&lcd);


Button btn1(102, 0, 100, 40, TFT_GREY, TFT_GREEN,15, "+");
Button btn2(0, 0, 100, 40, TFT_GREY, TFT_RED,15, "-");
Bar bar(0,42, 202, 25, 0, 10, TFT_GREY, TFT_BLUE);
Slider slider(0, 42, 200, 25, 0, 10, lbl1, TFT_WHITE, TFT_BLUE);
Label lbl1(0, 84, TFT_WHITE, TFT_BLACK, "Value");

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
  menu.addLabel(&lbl1);
  menu.render();  // Render the menu
}

void loop() {
  TOUCHINFO ti;
  if (lcd.rtReadTouch(&ti)) {
    menu.handleTouch(ti.x[0], ti.y[0]);  // Handle touch events
  }
}

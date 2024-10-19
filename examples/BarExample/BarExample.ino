#include <bb_spi_lcd.h>
#include <CYMS.h>

BB_SPI_LCD lcd;
CYMS menu(&lcd);

Button btn1(50, 50, 100, 40, "+");
Button btn2(152, 50, 100, 40, "-");
Bar bar(50, 75, 200, 100, TFT_WHITE, TFT_BLUE);

void setup() {
  Serial.begin(115200);
  lcd.begin(DISPLAY_CYD_2USB);
  lcd.rtInit(32, 39, 25, 33);  // Example touch pins
  lcd.fillScreen(TFT_BLACK);

  menu.addButton(&btn1);
  btn1.setCallback([]() {
    bar.setValue(bar.getValue() + 1);
    menu.render();
  });
  menu.addButton(&btn2);
  btn2.setCallback([]() {
    bar.setValue(bar.getValue() - 1);
    menu.render();
  });
  menu.addBar(&bar);
  menu.render();  // Render the menu
}

void loop() {
  TOUCHINFO ti;
  if (lcd.rtReadTouch(&ti)) {
    menu.handleTouch(ti.x[0], ti.y[0]);  // Handle touch events
  }
}

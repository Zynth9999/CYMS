#include <bb_spi_lcd.h>
#include <CYMS.h>

BB_SPI_LCD lcd;
CYMS menu(&lcd);

Button btn1(50, 50, 100, 40, "Start");
Button btn2(50, 100, 100, 40, "Settings");
Label lbl1(50, 150, "Select an option:");

void setup() {
  Serial.begin(115200);
  lcd.begin(DISPLAY_CYD_2USB);
  lcd.rtInit(32, 39, 25, 33);  // Example touch pins
  lcd.fillScreen(TFT_BLACK);

  menu.addButton(&btn1);
  menu.addButton(&btn2);
  menu.addLabel(&lbl1);
  menu.render();  // Render the menu
}

void loop() {
  TOUCHINFO ti;
  if (lcd.rtReadTouch(&ti)) {
    menu.handleTouch(ti.x[0], ti.y[0]);  // Handle touch events
  }
}

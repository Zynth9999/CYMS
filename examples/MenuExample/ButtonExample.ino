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
  btn1.setCallback([]() {
    Label Button2Label(5, 5, "Pressed Button 2");
    menu.addLabel(&Button2Label);
    menu.render();
  })
  menu.addButton(&btn2);
  btn2.setCallback([]() {
    Label Button1Label(5, 5, "Pressed Button 1");
    menu.addLabel(&Button1Label);
    menu.render();
  })
  menu.addLabel(&lbl1);
  menu.render();  // Render the menu
}

void loop() {
  TOUCHINFO ti;
  if (lcd.rtReadTouch(&ti)) {
    menu.handleTouch(ti.x[0], ti.y[0]);  // Handle touch events
  }
}

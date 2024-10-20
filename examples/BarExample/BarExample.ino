#include <bb_spi_lcd.h>
#include <CYMS.h>

BB_SPI_LCD lcd;
CYMS menu(&lcd);
// X, Y, W, H, TEXT COLOR, BTN COLOR, RADIUS, TEXT
Button btn1(152, 50, 100, 40, TFT_GREY, TFT_GREEN,15, "+");
Button btn2(50, 50, 100, 40, TFT_GREY, TFT_RED,15, "-");
// X, Y, W, H, MIN, MAX, OUTLINE, FILL
Bar bar(50,100, 200, 25, 0, 10, TFT_GREY, TFT_BLUE);

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
  menu.render();  // Render the menu
}

void loop() {
  TOUCHINFO ti;
  if (lcd.rtReadTouch(&ti)) {
    menu.handleTouch(ti.x[0], ti.y[0]);  // Handle touch events
  }
}

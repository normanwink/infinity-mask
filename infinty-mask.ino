#include <Adafruit_NeoPixel.h>

#define PIN 2
#define NUMPIXELS 22

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DEL 30
#define SPEED 0.075

#define R 255
#define G 0
#define B 255

void setup() {
  pixels.begin();
}

long TIME = 0;
void loop() {
  float currpos = TIME * SPEED;
  
  for(int i=0; i < NUMPIXELS; i++) {
    float brightness = (sin(currpos + i) + 1) * 0.5;
    float sqB = sq(brightness);
    uint8_t r = sqB * R;
    uint8_t g = sqB * G;
    uint8_t b = sqB * B;
    pixels.setPixelColor(i, pixels.Color(r, g, b));
  }
  pixels.show();
  
  delay(DEL);
  TIME++;
}

//Written by: Sal Mancuso
//GitHub: salmancuso
//Use: Free to use

#include <Adafruit_CircuitPlayground.h>
int randomNumber;
int randDelay;
int lightValue;
int roundCount = 0;
int maxCycles = 1100;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}


int longDelay(){
  randDelay = rand() % (30000);
  return randDelay;
}


int shortDelay(){
  randDelay = rand() % (200);
  return randDelay;
}


int flashNumb(){
  randDelay = rand() % (300);
  return randDelay;
}


void flash(){
  for (int i = 0; i < flashNumb(); i++) {
    CircuitPlayground.setBrightness(255);
    CircuitPlayground.setPixelColor(0, 255, 255, 255);
    CircuitPlayground.setPixelColor(1, 255, 255, 255);
    CircuitPlayground.setPixelColor(2, 255, 255, 255);
    CircuitPlayground.setPixelColor(3, 255, 255, 255);
    CircuitPlayground.setPixelColor(4, 255, 255, 255);
    CircuitPlayground.setPixelColor(5, 255, 255, 255);
    CircuitPlayground.setPixelColor(6, 255, 255, 255);
    CircuitPlayground.setPixelColor(7, 255, 255, 255);
    CircuitPlayground.setPixelColor(8, 255, 255, 255);
    CircuitPlayground.setPixelColor(9, 255, 255, 255);
    delay(shortDelay());
    CircuitPlayground.clearPixels();
    delay(shortDelay());
  }
}

void redSolid(){
    CircuitPlayground.setBrightness(255);
    CircuitPlayground.setPixelColor(0, 255,0,0);
    CircuitPlayground.setPixelColor(1, 255,0,0);
    CircuitPlayground.setPixelColor(2, 255,0,0);
    CircuitPlayground.setPixelColor(3, 255,0,0);
    CircuitPlayground.setPixelColor(4, 255,0,0);
    CircuitPlayground.setPixelColor(5, 255,0,0);
    CircuitPlayground.setPixelColor(6, 255,0,0);
    CircuitPlayground.setPixelColor(7, 255,0,0);
    CircuitPlayground.setPixelColor(8, 255,0,0);
    CircuitPlayground.setPixelColor(9, 255,0,0);
    delay(longDelay());
    CircuitPlayground.clearPixels();
}

void loop() {
  lightValue = CircuitPlayground.lightSensor();
  if (lightValue < 50){
      if(roundCount < maxCycles){
        roundCount = roundCount + 1;
        flash();
        redSolid();
      } else {
        CircuitPlayground.setPixelColor(2, 255,0,0);
        CircuitPlayground.setPixelColor(7, 255,0,0);
        delay(500);
      }
    } else {
      CircuitPlayground.clearPixels();
      if (lightValue > 100){
          delay(30000);
          if (lightValue > 100){
            roundCount = 0;
          }
        }
    }
}

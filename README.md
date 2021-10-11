#Halloween Skeleton Flasher#

### About ###
Every Halloween, I zip-tie a skeleton from a basketball hoop in my front yard. This year, I decided to use an Adafruit Circuit Playground Express to illuminate the skeleton at night. I choose the circuit playground for two reasons. 1. It has an onboard light sensor. 2. it has ten neopixels built onto the board.   Dusk is about 50 (light measurement), so anything less than 50 and the light cycle will begin. Once started, the code will count cycles until the "maxCycles" are reached; 120 cycles. After about seven hours (give or take 30 minutes due to randomness), the code will go into a power-saver mode (working off of three-D batteries) and only illuminate two of the 10 neopixels until dawn (no flashing)

### Needs ###
- Adafruit Circuit Playground Expresss
- Arduino programing IDLE
- 3 "D" battery pack
- 3 "D" batteries


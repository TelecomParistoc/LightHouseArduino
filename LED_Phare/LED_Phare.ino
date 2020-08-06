//Arduino code to control the lighthouse's LEDs
//This Code was made by David GERARD, member of the 2019-2020 Telecom Paris French robotic cup team.

#include <APA102.h>

const uint8_t dataPin = 11;
const uint8_t clockPin = 12;
APA102<dataPin, clockPin> ledStrip;

const uint16_t ledCount = 30; // number of LEDs in the strip
rgb_color colors[ledCount];
int i = 1;

void setup() {   
}

void loop() 
{   
        colors[(i-1)%ledCount].red = 0;
        colors[(i-1)%ledCount].green = 0;
        colors[(i-1)%ledCount].blue = 0;
        
        colors[i%ledCount].red = 225;
        colors[i%ledCount].green = 255;
        colors[i%ledCount].blue = 225;

        i++;

        ledStrip.write(colors, ledCount, 31);
        delay(100);
}

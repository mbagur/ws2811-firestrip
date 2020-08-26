#include <FastLED.h>

#define LED_STRIP_PIN 3
#define LED_COUNT 60
#define LED_TYPE WS2811
#define COLOR_ORDER GRB

CRGB leds[LED_COUNT];
int brightness = 64;

void setup()
{
    // put your setup code here, to run once:
    FastLED.addLeds<LED_TYPE, LED_STRIP_PIN, COLOR_ORDER>(leds, LED_COUNT);
    FastLED.setBrightness(brightness);
}

void loop()
{
    // put your main code here, to run repeatedly:

    for (int i = 0; i < LED_COUNT; ++i)
    {
        leds[i] = random(0x330000, 0xFFFFFF);
    }
    FastLED.show();
    int updatesPerSecond = random(10, 24);
    FastLED.delay(1000 / updatesPerSecond);
}
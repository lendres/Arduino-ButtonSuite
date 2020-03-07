/*
  Toggles an LED between on and off with each press of the button.

  The button should be wired such that when pressed, the "buttonPin" is
  connected to ground.

  The LED should be wired with the "ledPin" to the positive lead and the
  negative lead should be connected to ground.  A current limiting resistor
  should be used.
*/

#include "PushButton.h"

// Change these if your button or LED are on other pins.
int buttonPin   = 8;
int ledPin      = 9;

// The PushButton will automatically configure the button pin.
PushButton button(buttonPin);

void setup()
{
  // Setup the output LED.
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop()
{
  // Press the button once to turn it on, and again to turn it off.
  if (button.isPressed())
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}

#include <TimerOne.h>

void setup() {
  pinMode(9, OUTPUT); // Set pin D9 as an output pin
  pinMode(10, OUTPUT); // Set pin D10 as an output pin

  // Initialize Timer1
  Timer1.initialize(50); // Set the period in microseconds for 20 kHz (1/20000 Hz = 50 microseconds)
  Timer1.pwm(9, 512); // Set pin D9 to 50% duty cycle

  // Initialize Timer2
  Timer1.initialize(50); // Set the period in microseconds for 20 kHz (1/20000 Hz = 50 microseconds)
  Timer1.pwm(10, 512); // Set pin D10 to 50% duty cycle
}

void loop() {
  // Nothing needed here
}

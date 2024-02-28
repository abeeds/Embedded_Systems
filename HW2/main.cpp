#include <Arduino.h>

// put function declarations here:
int ledPin0 = 10;
int ledPin1 = 9;
int ledPin2 = 6;
int count = 0;

void setup() {
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}


void loop() {
  // initial increment
  count += 1;

  // 0th bit LED only lights if odd num
  if(count % 2 == 1) digitalWrite(ledPin0, HIGH);
  else digitalWrite(ledPin0, LOW);

  // 1st bit lights when modulo of the quotient is odd
  // ex: only lights at 2, 3 because quotient comes up as 1
  // but off at 4, 5 because the quotient comes up as 2
  if((count / 2) % 2 == 1 ) digitalWrite(ledPin1, HIGH);
  else digitalWrite(ledPin1, LOW);

  // 2nd bit LED only lights if greater than 3
  if(count > 3) digitalWrite(ledPin2, HIGH);
  else digitalWrite(ledPin2, LOW);

  // reset count
  if(count ==7) {
    count = 0;
  }
  delay(1000);
}

// put function definitions here:

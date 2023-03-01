/* 
 *  Basic Arduino laser brightness control -> same as an LED!
 *  Inherently, LEDs and lasers are very similar so 
 *  controlling both is effectively the same
*/

int inputVoltage = 0;
/* this is just the input voltage per usual [V]
 * at 0, it is 0V. At 255 (maximum), it is 5V. 
*/

int laserPin = 5;

int counter = 0;

// Creating some rhythm; wil need a speaker to hear it btw
 #include "pitches.h"
int led = 13;

int melody[] = {
  NOTE_C6, NOTE_AS5, NOTE_C6, NOTE_G5, NOTE_DS5, NOTE_G5, NOTE_C5, 0,
  NOTE_C6, NOTE_AS5, NOTE_C6, NOTE_G5, NOTE_DS5, NOTE_G5, NOTE_C5, 0,
  NOTE_C6, NOTE_D6, NOTE_DS6, NOTE_D6, NOTE_DS6, NOTE_C6, NOTE_D6, NOTE_C6,
  NOTE_D6, NOTE_AS5, NOTE_C6, NOTE_AS5, NOTE_C6, NOTE_G5, NOTE_C6, 0,
  NOTE_C6, NOTE_AS5, NOTE_C6, NOTE_G5, NOTE_DS5, NOTE_G5, NOTE_C5, 0,
  NOTE_C6, NOTE_AS5, NOTE_C6, NOTE_G5, NOTE_DS5, NOTE_G5, NOTE_C5, 0,
  NOTE_C6, NOTE_D6, NOTE_DS6, NOTE_D6, NOTE_DS6, NOTE_C6, NOTE_D6, NOTE_C6,
  NOTE_D6, NOTE_AS5, NOTE_C6, NOTE_AS5, NOTE_C6, NOTE_G5, NOTE_C6,
};

int dur[] = {
  4,8,16,4,8,16,4,8, 16,4,8,16,4,8,16,4, 8,16,4,8,16,4,8,16,
  4,8,16,4,8,16,4,8, 16,4,8, 16,4,8,16,4,8,16,4,8,16,4,8,16,
  4,8,16,4,8,16,4,8,16,4,8,16,4,8,16,4
  }; 
  
void setup() {
  pinMode(laserPin, OUTPUT);

  // 5) Check this out after checking out 1-4
  // This is making the laser "beat" to a rhythm 
  /* for (int note = 0; note < 64; note++) 
  {
    int noteDur = 900/dur[note];
    analogWrite(laserPin, noteDur*255/64);
    tone(8, melody[note],noteDur);
    digitalWrite(led, LOW);
    delay(dur);
    noTone(8);
  }
  */
}

void loop() {
  // 1) simply turnin the laser on w/ some voltage below
  // analogWrite(laserPin, inputVoltage);

  // 2) Blinking laser (like an LED!)
  /* digitalWrite(laserPin, HIGH); 
   delay(1000); // wait for a second
   digitalWrite(laserPin, LOW); 
   delay(1000); // wait for a second
  */

  // 3) Blinking laser with increasing power w/ blinks
  /* analogWrite(laserPin, inputVoltage + counter);
   delay(1000); // wait for a second
   digitalWrite(laserPin, LOW); 
   delay(1000); // wait for a second
   counter++;
  */
  
  // 4) random emission
  /* int randVolt = random(255);
  int randDelay = random(1000);
  analogWrite(laserPin, randVolt);
  delay(randDelay); // wait for a second
  */
}

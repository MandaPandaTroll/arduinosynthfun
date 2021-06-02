/*Arduino MKRZero monophonic MIDI synthesizer
 * 
 * 
 * 
 * 
 * Based on:MIDIUSB_test.ino
 *
 * Created: 4/6/2015 10:47:08 AM
 * Author: gurbrinder grewal
 * Modified by Arduino LLC (2015)
 * And then the Tabacwoman, May 2021
*/


// REMEMBER TO ENABLE MIDI CLOCK SYNC IN YOUR DAW, IF YOU WANT TO USE THE CLOCK PULSE THAT IS.

int pulseCount = 12; 
#include "PitchList.h"
#include "MIDIUSB.h"
const int outPin = 0; //Audio out
const int clockPin = 6; // Clock out




// First parameter is the event type (0x09 = note on, 0x08 = note off).
// Second parameter is note-on/note-off, combined with the channel.
// Channel can be anything between 0-15. Typically reported to the user as 1-16.
// Third parameter is the note number (48 = middle C).
// Fourth parameter is the velocity (64 = normal, 127 = fastest).


void noteOn(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOn = {0x09, 0x90 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOn);
  
}

void noteOff(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOff = {0x08, 0x80 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOff);

}

void timeClock(byte tick){
  midiEventPacket_t timeClock = {0xF, 0xF8 | tick };
  MidiUSB.sendMIDI(timeClock);


}



void setup() {
  Serial.begin(115200);
    pinMode(outPin, OUTPUT);
pinMode(6, OUTPUT);
}

// First parameter is the event type (0x0B = control change).
// Second parameter is the event type, combined with the channel.
// Third parameter is the control number number (0-119).
// Fourth parameter is the control value (0-127).

void controlChange(byte channel, byte control, byte value) {
  midiEventPacket_t event = {0x0B, 0xB0 | channel, control, value};
  MidiUSB.sendMIDI(event);
}

void loop() {

  midiEventPacket_t rx;
  do {
    rx = MidiUSB.read();
    if (rx.header != 0) {
      Serial.print("Received: ");
      Serial.print(rx.header, HEX);
      Serial.print("-");
      Serial.print(rx.byte1, HEX);
      Serial.print("-");
      Serial.print(rx.byte2, HEX);
      Serial.print("-");
      Serial.println(rx.byte3, HEX);


}
if (rx.header == 0xF && rx.byte1 == 0xF8){ //MIDI Clock from DAW
  if(pulseCount == 12){
    digitalWrite(clockPin, HIGH);
    delay(5);
    digitalWrite(clockPin, LOW);
    pulseCount = 0; // Clock OUT pulse and counter reset
  }
  if (pulseCount  < 12){
    pulseCount = pulseCount +1; //Clock counter
  }
}


if(rx.header == 0x09){  //noteOn command
  tone(outPin, pitchF[rx.byte2]); //Plays the pitch from the pitchlist
}

if(rx.header == 0x08){
  noTone(outPin); //noteOff command
}

if(rx.header == 0x0B){
  noTone(outPin); // I don't remember why I put this here lol
}

   
       } while (rx.header != 0);

  
}

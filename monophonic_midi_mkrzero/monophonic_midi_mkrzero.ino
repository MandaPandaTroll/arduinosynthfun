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
 * 
 *
 */ 
int outPin = 2; //audio out



#include "MIDIUSB.h"
#include "pitches.h"
#include "notelist.h"


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

void setup() {
  Serial.begin(115200);
pinMode(outPin, OUTPUT);
  
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
      Serial.print(rx.byte2);
      Serial.print("-");
      Serial.println(rx.byte3, HEX);



  if (rx.header == 9 ){ //toneOn command


 if (rx.byte2 == N_C_02){
    tone(outPin, C_02);
    }
       if (rx.byte2 == N_Cc_02){
    tone(outPin, Cc_02);
    }

   if (rx.byte2 == N_D_02){
    tone(outPin, D_02);
    }
       if (rx.byte2 == N_Dd_02){
    tone(outPin, Dd_02);
    }
     if (rx.byte2 == N_E_02){
    tone(outPin, E_02);
    }
         if (rx.byte2 == N_F_02){
    tone(outPin, F_02);
    }
      if (rx.byte2 == N_Ff_02){
    tone(outPin, Ff_02);
    } 
     if (rx.byte2 == N_G_02){
    tone(outPin, G_02);
    }
       if (rx.byte2 == N_Gg_02){
    tone(outPin, Gg_02);
    }  
      if (rx.byte2 == N_A_02){
    tone(outPin, A_02);
    }
          if (rx.byte2 == N_Aa_02){
    tone(outPin, Aa_02);
    }
         if (rx.byte2 == N_B_02){
    tone(outPin, B_02);
    }



 if (rx.byte2 == N_C_01){
    tone(outPin, C_01);
    }
       if (rx.byte2 == N_Cc_01){
    tone(outPin, Cc_01);
    }

   if (rx.byte2 == N_D_01){
    tone(outPin, D_01);
    }
       if (rx.byte2 == N_Dd_01){
    tone(outPin, Dd_01);
    }
     if (rx.byte2 == N_E_01){
    tone(outPin, E_01);
    }
         if (rx.byte2 == N_F_01){
    tone(outPin, F_01);
    }
      if (rx.byte2 == N_Ff_01){
    tone(outPin, Ff_01);
    } 
     if (rx.byte2 == N_G_01){
    tone(outPin, G_01);
    }
       if (rx.byte2 == N_Gg_01){
    tone(outPin, Gg_01);
    }  
      if (rx.byte2 == N_A_01){
    tone(outPin, A_01);
    }
          if (rx.byte2 == N_Aa_01){
    tone(outPin, Aa_01);
    }
         if (rx.byte2 == N_B_01){
    tone(outPin, B_01);
    }




 if (rx.byte2 == N_C_0){
    tone(outPin, C_0);
    }
       if (rx.byte2 == N_Cc_0){
    tone(outPin, Cc_0);
    }

   if (rx.byte2 == N_D_0){
    tone(outPin, D_0);
    }
       if (rx.byte2 == N_Dd_0){
    tone(outPin, Dd_0);
    }
     if (rx.byte2 == N_E_0){
    tone(outPin, E_0);
    }
         if (rx.byte2 == N_F_0){
    tone(outPin, F_0);
    }
      if (rx.byte2 == N_Ff_0){
    tone(outPin, Ff_0);
    } 
     if (rx.byte2 == N_G_0){
    tone(outPin, G_0);
    }
       if (rx.byte2 == N_Gg_0){
    tone(outPin, Gg_0);
    }  
      if (rx.byte2 == N_A_0){
    tone(outPin, A_0);
    }
          if (rx.byte2 == N_Aa_0){
    tone(outPin, Aa_0);
    }
         if (rx.byte2 == N_B_0){
    tone(outPin, B_0);
    }
    


 if (rx.byte2 == N_C_1){
    tone(outPin, C_1);
    }
       if (rx.byte2 == N_Cc_1){
    tone(outPin, Cc_1);
    }

   if (rx.byte2 == N_D_1){
    tone(outPin, D_1);
    }
       if (rx.byte2 == N_Dd_1){
    tone(outPin, Dd_1);
    }
     if (rx.byte2 == N_E_1){
    tone(outPin, E_1);
    }
         if (rx.byte2 == N_F_1){
    tone(outPin, F_1);
    }
      if (rx.byte2 == N_Ff_1){
    tone(outPin, Ff_1);
    } 
     if (rx.byte2 == N_G_1){
    tone(outPin, G_1);
    }
       if (rx.byte2 == N_Gg_1){
    tone(outPin, Gg_1);
    }  
      if (rx.byte2 == N_A_1){
    tone(outPin, A_1);
    }
          if (rx.byte2 == N_Aa_1){
    tone(outPin, Aa_1);
    }
         if (rx.byte2 == N_B_1){
    tone(outPin, B_1);
    }


    
 if (rx.byte2 == N_C_2){
  
    tone(outPin, C_2);
    }
       if (rx.byte2 == N_Cc_2){
    tone(outPin, Cc_2);
    }

   if (rx.byte2 == N_D_2){
    tone(outPin, D_2);
    }
       if (rx.byte2 == N_Dd_2){
    tone(outPin, Dd_2);
    }
     if (rx.byte2 == N_E_2){
    tone(outPin, E_2);
    }
         if (rx.byte2 == N_F_2){
    tone(outPin, F_2);
    }
      if (rx.byte2 == N_Ff_2){
    tone(outPin, Ff_2);
    } 
     if (rx.byte2 == N_G_2){
    tone(outPin, G_2);
    }
       if (rx.byte2 == N_Gg_2){
    tone(outPin, Gg_2);
    }  
      if (rx.byte2 == N_A_2){
    tone(outPin, A_2);
    }
          if (rx.byte2 == N_Aa_2){
    tone(outPin, Aa_2);
    }
         if (rx.byte2 == N_B_2){
    tone(outPin, B_2);
    }


    

   if (rx.byte2 == N_C_3){
    tone(outPin, C_3);
    }
       if (rx.byte2 == N_Cc_3){
    tone(outPin, Cc_3);
    }

   if (rx.byte2 == N_D_3){
    tone(outPin, D_3);
    }
       if (rx.byte2 == N_Dd_3){
    tone(outPin, Dd_3);
    }
     if (rx.byte2 == N_E_3){
    tone(outPin, E_3);
    }
         if (rx.byte2 == N_F_3){
    tone(outPin, F_3);
    }
      if (rx.byte2 == N_Ff_3){
    tone(outPin, Ff_3);
    } 
     if (rx.byte2 == N_G_3){
    tone(outPin, G_3);
    }
       if (rx.byte2 == N_Gg_3){
    tone(outPin, Gg_3);
    }  
      if (rx.byte2 == N_A_3){
    tone(outPin, A_3);
    }
          if (rx.byte2 == N_Aa_3){
    tone(outPin, Aa_3);
    }
         if (rx.byte2 == N_B_3){
    tone(outPin, B_3);
    }
    
   if (rx.byte2 == N_C_4){
    tone(outPin, C_4);
    }
       if (rx.byte2 == N_Cc_4){
    tone(outPin, Cc_4);
    }
    
       if (rx.byte2 == N_D_4){
    tone(outPin, D_4);
    }
       if (rx.byte2 == N_Dd_4){
    tone(outPin, Dd_4);
    }
     if (rx.byte2 == N_E_4){
    tone(outPin, E_4);
    } 
         if (rx.byte2 == N_F_4){
    tone(outPin, F_4);
    }
         if (rx.byte2 == N_Ff_4){
    tone(outPin, Ff_4);
    }
     if (rx.byte2 == N_G_4){
    tone(outPin, G_4);
    }
       if (rx.byte2 == N_Gg_4){
    tone(outPin, Gg_4);
    }
      if (rx.byte2 == N_A_4){
    tone(outPin, A_4);
    }
          if (rx.byte2 == N_Aa_4){
    tone(outPin, Aa_4);
    }
         if (rx.byte2 == N_B_4){
    tone(outPin, B_4);
    }


 if (rx.byte2 == N_C_5){
    tone(outPin, C_5);
    }
       if (rx.byte2 == N_Cc_5){
    tone(outPin, Cc_5);
    }

   if (rx.byte2 == N_D_5){
    tone(outPin, D_5);
    }
       if (rx.byte2 == N_Dd_5){
    tone(outPin, Dd_5);
    }
     if (rx.byte2 == N_E_5){
    tone(outPin, E_5);
    }
         if (rx.byte2 == N_F_5){
    tone(outPin, F_5);
    }
      if (rx.byte2 == N_Ff_5){
    tone(outPin, Ff_5);
    } 
     if (rx.byte2 == N_G_5){
    tone(outPin, G_5);
    }
       if (rx.byte2 == N_Gg_5){
    tone(outPin, Gg_5);
    }  
      if (rx.byte2 == N_A_5){
    tone(outPin, A_5);
    }
          if (rx.byte2 == N_Aa_5){
    tone(outPin, Aa_5);
    }
         if (rx.byte2 == N_B_5){
    tone(outPin, B_5);
    }


 if (rx.byte2 == N_C_6){
    tone(outPin, C_6);
    }
       if (rx.byte2 == N_Cc_6){
    tone(outPin, Cc_6);
    }

   if (rx.byte2 == N_D_6){
    tone(outPin, D_6);
    }
       if (rx.byte2 == N_Dd_6){
    tone(outPin, Dd_6);
    }
     if (rx.byte2 == N_E_6){
    tone(outPin, E_6);
    }
         if (rx.byte2 == N_F_6){
    tone(outPin, F_6);
    }
      if (rx.byte2 == N_Ff_6){
    tone(outPin, Ff_6);
    } 
     if (rx.byte2 == N_G_6){
    tone(outPin, G_6);
    }
       if (rx.byte2 == N_Gg_6){
    tone(outPin, Gg_6);
    }  
      if (rx.byte2 == N_A_6){
    tone(outPin, A_6);
    }
          if (rx.byte2 == N_Aa_6){
    tone(outPin, Aa_6);
    }
         if (rx.byte2 == N_B_6){
    tone(outPin, B_6);
    }



 if (rx.byte2 == N_C_7){
    tone(outPin, C_7);
    }
       if (rx.byte2 == N_Cc_7){
    tone(outPin, Cc_7);
    }

   if (rx.byte2 == N_D_7){
    tone(outPin, D_7);
    }
       if (rx.byte2 == N_Dd_7){
    tone(outPin, Dd_7);
    }
     if (rx.byte2 == N_E_7){
    tone(outPin, E_7);
    }
         if (rx.byte2 == N_F_7){
    tone(outPin, F_7);
    }
      if (rx.byte2 == N_Ff_7){
    tone(outPin, Ff_7);
    } 
     if (rx.byte2 == N_G_7){
    tone(outPin, G_7);
    }
       if (rx.byte2 == N_Gg_7){
    tone(outPin, Gg_7);
    }  
      if (rx.byte2 == N_A_7){
    tone(outPin, A_7);
    }
          if (rx.byte2 == N_Aa_7){
    tone(outPin, Aa_7);
    }
         if (rx.byte2 == N_B_7){
    tone (outPin, B_7);
    }



 if (rx.byte2 == N_C_8){
    tone(outPin, C_8);
    }
       if (rx.byte2 == N_Cc_8){
    tone(outPin, Cc_8);
    }

   if (rx.byte2 == N_D_8){
    tone(outPin, D_8);
    }
       if (rx.byte2 == N_Dd_8){
    tone(outPin, Dd_8);
    }
     if (rx.byte2 == N_E_8){
    tone(outPin, E_8);
    }
         if (rx.byte2 == N_F_8){
    tone(outPin, F_8);
    }
      if (rx.byte2 == N_Ff_8){
    tone(outPin, Ff_8);
    } 
     if (rx.byte2 == N_G_8){
    tone(outPin, G_8);
    }

    

  }
  if ( rx.header == 8){ //toneOff command
   
    noTone(outPin);
  }
}
      
    
  } while (rx.header != 0);
}

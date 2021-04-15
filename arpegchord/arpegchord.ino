//notes

int A = 110;
int Aa = 116;
int B = 123;
int C = 130;
int Cc = 138;
int D = 146;
int Dd = 155;
int E = 164;
int F = 174;
int Ff = 185;
int G = 196;
int Gg = 208;

int A_2 = 220;
int Aa_2 = 233;
int B2 = 246;
int C2 = 261;
int Cc2 = 277;
int D2 = 293;
int Dd2 = 311;
int E2 = 329;
int F2 = 349;
int Ff2 = 369;
int G2 = 392;
int Gg2 = 415;

//pins

int keyA = 2;
int keyB = 3;
int keyC = 4;
int keyD = 5;
int keyE = 6;
int keyF = 7;
int keyG = 8;
int keyA1 = 9;
int pitchOut = 13;
int kick = 10;


//subdivisions

float t = 2;
   float baseSpeed = 1000;

   float varSpeed = baseSpeed / t;
  
  float wh = varSpeed , ha = wh/2, third = wh/3, fifth = wh/4, sixth = wh/6, eighth = wh/8, sixteenth = wh / 16, thirtysecond = wh/32;







void setup() {
  // put your setup code here, to run once:
  
pinMode(keyA, INPUT);
pinMode(keyB, INPUT);
pinMode(keyC, INPUT);
pinMode(keyD, INPUT);
pinMode(keyE, INPUT);
pinMode(keyF, INPUT);
pinMode(keyG, INPUT);
pinMode(keyA1, INPUT);
pinMode(pitchOut, OUTPUT);
pinMode(kick, OUTPUT);

digitalWrite(keyA, LOW);
digitalWrite(keyB, LOW);
digitalWrite(keyC, LOW);
digitalWrite(keyD, LOW);
digitalWrite(keyE, LOW);
digitalWrite(keyF, LOW);
digitalWrite(keyG, LOW);
digitalWrite(keyA1, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
//arp direction

long dicey = random (0, 100);
int up = 0;
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
  
if (digitalRead(keyA) == HIGH && up == 1){


 digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);

  tone(pitchOut, A);
delay(third);
  tone(pitchOut, C);
delay(third);
  tone(pitchOut, E);
  delay(third);

  dicey = random(0,100);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}

}

if (digitalRead(keyA) == HIGH && up == 0){


 digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);

  tone(pitchOut, E);
delay(third);
  tone(pitchOut, C);
delay(third);
  tone(pitchOut, A);
  delay(third);
 if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}

if (digitalRead(keyB) == HIGH && up == 0){


  
    tone(pitchOut, B);
    delay(third);
  tone(pitchOut, D);
  delay(third);
  tone(pitchOut, F);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}

if (digitalRead(keyB) == HIGH && up == 1){


  
    tone(pitchOut, F);
    delay(third);
  tone(pitchOut, D);
  delay(third);
  tone(pitchOut, Aa);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}
  
if (digitalRead(keyC) == HIGH && up == 0){

 digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);
  
  tone(pitchOut, C);
  delay(third);
  tone(pitchOut, E);
  delay(third);
  tone(pitchOut, G);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}

if (digitalRead(keyC) == HIGH && up == 1){

 digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);
  
  tone(pitchOut, G);
  delay(third);
  tone(pitchOut, E);
  delay(third);
  tone(pitchOut, C);
  delay(third);
 if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}
  
if (digitalRead(keyD) == HIGH && up == 0){



tone(pitchOut, D);
delay(third);
  tone(pitchOut, F);
  delay(third);
  tone(pitchOut, A_2);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
  
}if (digitalRead(keyD) == HIGH && up == 1){



tone(pitchOut, A_2);
delay(third);
  tone(pitchOut, F);
  delay(third);
  tone(pitchOut, D);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
  
}

  
if (digitalRead(keyE) == HIGH && up == 0){

   digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);

    tone(pitchOut, E);
    delay(third);
  tone(pitchOut, G);
  delay(third);
  tone(pitchOut, B2);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}

if (digitalRead(keyE) == HIGH && up == 1){

   digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);

    tone(pitchOut, B2);
    delay(third);
  tone(pitchOut, G);
  delay(third);
  tone(pitchOut, E);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}
  
if (digitalRead(keyF) == HIGH && up == 0){
 digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);

   
 tone(pitchOut, F);
 delay(third);
  tone(pitchOut, A_2);
  delay(third);
  tone(pitchOut, C2);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}

if (digitalRead(keyF) == HIGH && up == 1){
 digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);

   
 tone(pitchOut, C2);
 delay(third);
  tone(pitchOut, A_2);
  delay(third);
  tone(pitchOut, F);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}
  
if (digitalRead(keyG) == HIGH && up == 0){
 digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);


  tone(pitchOut, G);
  delay(third);
  tone(pitchOut, B2);
  delay(third);
  tone(pitchOut, D2);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}

if (digitalRead(keyG) == HIGH && up == 1){
 digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);


  tone(pitchOut, D2);
  delay(third);
  tone(pitchOut, B2);
  delay(third);
  tone(pitchOut, G);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}
  
if (digitalRead(keyA1) == HIGH && up == 0){

 digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);

  tone(pitchOut, A_2);
delay(third);
  tone(pitchOut, C2);
delay(third);
  tone(pitchOut, E2);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}


if (digitalRead(keyA1) == HIGH && up == 1){

 digitalWrite(kick, HIGH);
  delay(5);
   digitalWrite(kick, LOW);

  tone(pitchOut, E);
delay(third);
  tone(pitchOut, C2);
delay(third);
  tone(pitchOut, A_2);
  delay(third);
if (dicey < 80){
  up = 0;
}

if (dicey > 80){
  up = 1;
}
}

else {
  noTone(pitchOut);
  digitalWrite(kick, LOW);
}
}

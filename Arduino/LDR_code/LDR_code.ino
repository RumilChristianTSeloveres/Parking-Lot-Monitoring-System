const int ldrPin = 3;
const int ldrPin2 = 4;
const int ldrPin3 = 5;
const int ldrPin4 = 6;
const int ldrPin5 = 7;
const int ldrPin6 = 8;
const int ldrPin7 = 9;
const int ldrPin8 = 10;
const int ldrPin9 = 11;
const int ldrPin10 = 12;
const int ledin = 13;
const int ledout = 14;

void setup() {

Serial.begin(9600);

pinMode(ldrPin, INPUT);
pinMode(ldrPin2, INPUT);
pinMode(ldrPin3, INPUT);
pinMode(ldrPin4, INPUT);
pinMode(ldrPin5, INPUT);
pinMode(ldrPin6, INPUT);
pinMode(ldrPin7, INPUT);
pinMode(ldrPin8, INPUT);
pinMode(ldrPin9, INPUT);
pinMode(ldrPin10, INPUT);
pinMode(ledin, OUTPUT);
pinMode(ledout, OUTPUT);
}

void loop() {

int ldrStatus = digitalRead(ldrPin);
int ldr2Status = digitalRead(ldrPin2);
int ldr3Status = digitalRead(ldrPin3);
int ldr4Status = digitalRead(ldrPin4);
int ldr5Status = digitalRead(ldrPin5);
int ldr6Status = digitalRead(ldrPin6);
int ldr7Status = digitalRead(ldrPin7);
int ldr8Status = digitalRead(ldrPin8);
int ldr9Status = digitalRead(ldrPin9);
int ldr10Status = digitalRead(ldrPin10);

if(ldrStatus == 0){
ldrStatus = 1;
} else { ldrStatus = 0; }
if(ldr2Status == 0){  
ldr2Status = 1;
} else {ldr2Status = 0; }
if(ldr3Status == 0){
ldr3Status = 1;
} else {ldr3Status = 0; }
if(ldr4Status == 0){
ldr4Status = 1;
} else {ldr4Status = 0; }
if(ldr5Status == 0){
ldr5Status = 1;
} else {ldr5Status = 0; }
if(ldr6Status == 0){
ldr6Status = 1;
} else {ldr6Status = 0; }
if(ldr7Status == 0){
ldr7Status = 1;
} else {ldr7Status = 0; }
if(ldr8Status == 0){
ldr8Status = 1;
} else {ldr8Status = 0; }
if(ldr9Status == 0){
ldr9Status = 1;
} else {ldr9Status = 0; }
if(ldr10Status == 0){
ldr10Status = 1;
} else {ldr10Status = 0; }

const int total = ldrStatus + ldr2Status + ldr3Status + ldr4Status + ldr5Status + ldr6Status + ldr7Status + ldr8Status + ldr9Status + ldr10Status;
Serial.print("Total: ");
Serial.println(total);
delay(2000);

if(total < 10){
  digitalWrite(ledin, HIGH);
  digitalWrite(ledout, LOW);

} else if(total == 10){
  digitalWrite(ledout, HIGH);
  digitalWrite(ledin, LOW);
  delay(15);
  }
}
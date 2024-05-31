#include <Servo.h>
Servo myservo;
int servo = 14;

const int ldrPin = 2;
const int ldrPin2 = 3;
const int ldrPin3 = 4;
const int ldrPin4 = 5;
const int ldrPin5 = 6;
const int ldrPin6 = 7;
const int ldrPin7 = 8;
const int ldrPin8 = 9;
const int ldrPin9 = 10;
const int ldrPin10 = 11;
const int ledin = 12;
const int ledout = 13;
int pushButton = 16;
int buzzer = 17;

void setup() {
Serial.begin(9600);

myservo.attach(servo);

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
pinMode(pushButton, INPUT); 
pinMode(buzzer, OUTPUT);
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

  if(ldrStatus == 0)
    ldrStatus = 1;
  if(ldr2Status == 0)
    ldr2Status = 1;
  if(ldr3Status == 0)
    ldr3Status = 1;
  if(ldr4Status == 0)
    ldr4Status = 1;
  if(ldr5Status == 0)
    ldr5Status = 1;
  if(ldr6Status == 0)
    ldr6Status = 1;
  if(ldr7Status == 0)
    ldr7Status = 1;
  if(ldr8Status == 0)
    ldr8Status = 1;
  if(ldr9Status == 0)
    ldr9Status = 1;
  if(ldr10Status == 0)
    ldr10Status = 1;

  const int total = ldrStatus + ldr2Status + ldr3Status + ldr4Status + ldr5Status + ldr6Status + ldr7Status + ldr8Status + ldr9Status + ldr10Status;
  Serial.print("Total: ");
  Serial.println(total);
  delay(2000);

  if(total < 10){
    digitalWrite(ledin, HIGH);
    myservo.write(90);
  } else if(total == 10){
      digitalWrite(ledout, HIGH);
      myservo.write(0);
    }


  int buttonState = digitalRead(pushButton);

    if (buttonState == HIGH) {
      digitalWrite(buzzer, HIGH); delay(1000);  digitalWrite(buzzer, LOW); delay(500);  
      digitalWrite(buzzer, HIGH); delay(500);  digitalWrite(buzzer, LOW); delay(500);
      digitalWrite(buzzer, HIGH); delay(2000);  digitalWrite(buzzer, LOW); delay(500);
      digitalWrite(buzzer, HIGH); delay(1000);  digitalWrite(buzzer, LOW); delay(500);
      digitalWrite(buzzer, HIGH); delay(500);  digitalWrite(buzzer, LOW); delay(500);
      digitalWrite(buzzer, HIGH); delay(3000);  digitalWrite(buzzer, LOW);

      if(total == 0){
        myservo.write(0);
      }
    }
} 

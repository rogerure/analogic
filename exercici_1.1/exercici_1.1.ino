 int LED1 = 3;
 int LED2 = 5;
 int LED3 = 6;
 int LED4 = 9;
 int LED5 = 10;
 int LED6 = 11;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (LED1,OUTPUT);
  pinMode (LED2,OUTPUT);
  pinMode (LED3,OUTPUT);
  pinMode (LED4,OUTPUT);
  pinMode (LED5,OUTPUT);
  pinMode (LED6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite (LED1,0);
  analogWrite (LED2,0);
  analogWrite (LED3,0);
  analogWrite (LED4,0);
  analogWrite (LED5,0);
  analogWrite (LED6,0);
  delay (1000);
  analogWrite (LED1,85);
  analogWrite (LED2,85);
  analogWrite (LED3,85);
  analogWrite (LED4,85);
  analogWrite (LED5,85);
  analogWrite (LED6,85);
  delay (1000);
  analogWrite (LED1,170);
  analogWrite (LED2,170);
  analogWrite (LED3,170);
  analogWrite (LED4,170);
  analogWrite (LED5,170);
  analogWrite (LED6,170);
  delay (1000);
  analogWrite (LED1,255);
  analogWrite (LED2,255);
  analogWrite (LED3,255);
  analogWrite (LED4,255);
  analogWrite (LED5,255);
  analogWrite (LED6,255);
  delay (1000);
}

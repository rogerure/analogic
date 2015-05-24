  float potenciometre;
  float escalat;

void setup() {
  // put your setup code here, to run once:
  pinMode (3,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (10,OUTPUT);
  pinMode (11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potenciometre = analogRead (A1);
  escalat = map(potenciometre,0,1023,0,255); 
  
  if (escalat < 127)
{
  analogWrite (3,HIGH);
  analogWrite (5,LOW);
  analogWrite (6,HIGH);
  analogWrite (9,LOW);
  analogWrite (10,HIGH);
  analogWrite (11,LOW);
}
  else
{
  analogWrite (3,LOW);
  analogWrite (5,HIGH);
  analogWrite (6,LOW);
  analogWrite (9,HIGH);
  analogWrite (10,LOW);
  analogWrite (11,HIGH);
}
}

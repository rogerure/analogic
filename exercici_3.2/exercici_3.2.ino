  float potenciometre;
  float escalat;
  void setup() {
  // put your setup code here, to run once:
  pinMode (2,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potenciometre = analogRead (A1);
  escalat = map(potenciometre,0,1023,0,255);
  digitalWrite (2,LOW);
  digitalWrite (3,LOW);
  digitalWrite (4,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);
  digitalWrite (7,LOW);
  delay (escalat);
  digitalWrite (2,HIGH);
  delay (escalat);
  digitalWrite (3,HIGH);
  delay (escalat);
  digitalWrite (4,HIGH);
  delay (escalat);
  digitalWrite (2,LOW);
  digitalWrite (5,HIGH);
  delay (escalat);
  digitalWrite (3,LOW);
  digitalWrite (6,HIGH);
  delay (escalat);
  digitalWrite (4,LOW);
  digitalWrite (7,HIGH);
  delay (escalat);
  digitalWrite (5,LOW);
  delay (escalat);
  digitalWrite (6,LOW);
  delay (escalat);
  digitalWrite (7,LOW);
  delay (escalat);
  digitalWrite (7,HIGH);
  delay (escalat);
  digitalWrite (6,HIGH);
  delay (escalat);
  digitalWrite (5,HIGH);
  delay (escalat);
  digitalWrite (4,HIGH);
  digitalWrite (7,LOW);
  delay (escalat);
  digitalWrite (3,HIGH);
  digitalWrite (6,LOW);
  delay (escalat);
  digitalWrite (2,HIGH);
  digitalWrite (5,LOW);
  delay (escalat);
  digitalWrite (4,LOW);
  delay (escalat);
  digitalWrite (3,LOW);
  delay (escalat);
  digitalWrite (2,LOW);
  delay (escalat);
}

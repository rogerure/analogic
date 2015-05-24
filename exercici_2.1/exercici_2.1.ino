  const int LED1 = 5;
  const int LDR = A0;
  int valor;
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (LED1,OUTPUT);
  pinMode (LDR,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead (A0);
  valor = map (LDR,0,1023,0,255);
  
  if (valor < 85)
  {
  analogWrite (LED1,85);
}
  else if (valor < 170)
  {
  analogWrite (LED1,170);
} 
   else 
  {
  analogWrite (LED1,255);
}
}

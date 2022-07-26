void setup() 
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() 
{
  digitalWrite(5, 1);
  delay(1000);
  digitalWrite(5, 0);
  delay(1000);
  digitalWrite(6, 1);
  delay(1000);
  digitalWrite(6, 0);
  delay(1000);
  digitalWrite(7, 1);
  delay(1000);
  digitalWrite(7, 0);
  delay(1000);
  

}

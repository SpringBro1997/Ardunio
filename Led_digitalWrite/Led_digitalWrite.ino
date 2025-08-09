//Khai báo chân sử dụng trong board
int led= 10;

void setup() 
{
  pinMode(led,OUTPUT);
}

void loop() 
{
  digitalWrite(led,HIGH);
  delay(2000);

  digitalWrite(led,LOW);
  delay(2000);
}

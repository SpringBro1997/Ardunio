 //Khai báo chân sử dụng
int led= 10;
int nutnhan= 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(nutnhan,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bamnut= digitalRead(nutnhan);
  if (bamnut== 1)
  {
    digitalWrite(led,HIGH);
    delay(2000);
    digitalWrite(led,LOW);
    delay(000);
  }
}

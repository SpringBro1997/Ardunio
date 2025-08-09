// Khái báo chân sử dụng
int led1= 10;
int led2= 11;
int led3= 12;
int button1= 2;
int button2= 3;
int button3= 4;

//Khai báo OUTPUT- INPUT cho chân sử dụng
void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
}

//Khai báo chức năng hoạt động
//Sử dụng digitalRead để khai báo chức năng bấm nút cho button
void loop()
{
  int bamnut1= digitalRead(button1); 
  int bamnut2= digitalRead(button2); 
  int bamnut3= digitalRead(button3); 

  if (bamnut1== 1)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    delay(5000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    delay(100); 
  }

  else if (bamnut2== 1)
  {
    
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    delay(5000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    delay(100); 
  }

  else if (bamnut3== 1)
  {
    digitalWrite(led3,HIGH);
    delay(5000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    delay(100);
  }
}
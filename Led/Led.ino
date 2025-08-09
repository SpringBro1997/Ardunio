/* Chương trình sáng bóng led 2v(150 ôm)- 1 tụ 200 ôm- nguồn cấp 5v */

//Khai báo chân sử dụng
int led= 13;

//Khai báo chức năng các chân
void setup() 
{
  pinMode(led,OUTPUT);
}

void loop() 
{
  //Khai báo LED sáng 
  digitalWrite(led,HIGH);
  //Thời gian LED sáng
  delay(1000);

  //Khai báo LED tắt
  digitalWrite(led,LOW);
  //Thời gian led tắt
  delay(500);

}

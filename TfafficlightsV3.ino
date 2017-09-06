
#define LEDGreen1 D0
#define LEDYello1 D1
#define LEDRed1 D2

#define LEDGreen2 D3
#define LEDYello2 D4
#define LEDRed2 D5

#define LEDGreen3 D6
#define LEDYello3 D7
#define LEDRed3 D8

#define LEDGreen4 D9
#define LEDYello4 D10
//#define LEDYello4 D11->9
int LEDRed4 = 9;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LEDGreen1, OUTPUT);
  pinMode(LEDYello1, OUTPUT);
  pinMode(LEDRed1, OUTPUT);
  pinMode(LEDGreen2, OUTPUT);
  pinMode(LEDYello2, OUTPUT);
  pinMode(LEDRed2, OUTPUT);
  pinMode(LEDGreen3, OUTPUT);
  pinMode(LEDYello3, OUTPUT);
  pinMode(LEDRed3, OUTPUT);
  pinMode(LEDGreen4, OUTPUT);
  pinMode(LEDYello4, OUTPUT);
  pinMode(LEDRed4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(LEDGreen1, HIGH);  //ไฟเขียวทางที่ 1 ติด
  digitalWrite(LEDRed2, HIGH);    //ไฟแดงทางที่ 2 ติด
  digitalWrite(LEDRed3, HIGH);    //ไฟแดงทางที่ 3 ติด
  digitalWrite(LEDRed4, HIGH);    //ไฟแดงทางที่ 4 ติด
  delay(3000);                    //เป็นเวลา 3 วินาที 
  digitalWrite(LEDGreen1, LOW);   //ไฟเขียวทางที่ 1 ดับ
  digitalWrite(LEDRed2, LOW);     //ไฟแดงทางที่ 2 ดับ

  digitalWrite(LEDYello1, HIGH);  //ไฟเหลืองทางที่ 1 ติด
  digitalWrite(LEDYello2, HIGH);  //ไฟเหลืองทางที่ 2 ติด
  delay(1000);                    //เป็นเวลา 1 วินาที
  digitalWrite(LEDYello1, LOW);   //ไฟเหลืองทางที่ 1 ดับ
  digitalWrite(LEDYello2, LOW);   //ไฟเหลืองทางที่ 2 ดับ

  digitalWrite(LEDRed1, HIGH);    //ไฟแดงทางที่ 1 ติด
  digitalWrite(LEDGreen2, HIGH);  //ไฟเขียวทางที่ 2 ติด
  delay(3000);
  digitalWrite(LEDGreen2, LOW);   //ไฟเขียวทางที่ 2 ดับ
  digitalWrite(LEDRed3, LOW);     //ไฟแดงทางที่ 3 ดับ

  digitalWrite(LEDYello2, HIGH);  //ไฟเหลืองทางที่ 2 ติด
  digitalWrite(LEDYello3, HIGH);  //ไฟเหลืองทางที่ 3 ติด
  delay(1000);
  digitalWrite(LEDYello2, LOW);   //ไฟเหลืองทางที่ 2 ดับ
  digitalWrite(LEDYello3, LOW);   //ไฟเหลืองทางที่ 3 ดับ

  digitalWrite(LEDRed2, HIGH);    //ไฟแดงทางที่ 2 ติด
  digitalWrite(LEDGreen3, HIGH);  //ไฟเขียวทางที่ 3 ติด
  delay(3000);
  digitalWrite(LEDGreen3, LOW);   //ไฟเขียวทางที่ 3 ดับ
  digitalWrite(LEDRed4, LOW);     //ไฟแดงทางที่ 3 ดับ

  digitalWrite(LEDYello3, HIGH);  //ไฟเหลืองทางที่ 3 ติด
  digitalWrite(LEDYello4, HIGH);  //ไฟเหลืองทางที่ 4 ติด
  delay(1000);
  digitalWrite(LEDYello3, LOW);   //ไฟเหลืองทางที่ 3 ดับ
  digitalWrite(LEDYello4, LOW);   //ไฟเหลืองทางที่ 4 ดับ

  digitalWrite(LEDRed3, HIGH);    //ไฟแดงทางที่ 2 ติด
  digitalWrite(LEDGreen4, HIGH);  //ไฟเขียวทางที่ 3 ติด
  delay(3000);
  digitalWrite(LEDGreen4, LOW);   //ไฟเขียวทางที่ 4 ดับ
  //digitalWrite(LEDRed3, LOW);
  digitalWrite(LEDRed1, LOW);   //ไฟแดงทางที่ 3 ดับ

  digitalWrite(LEDYello1, HIGH);  //ไฟเหลืองทางที่ 3 ติด
  digitalWrite(LEDYello4, HIGH);  //ไฟเหลืองทางที่ 4 ติด
  delay(1000);
  digitalWrite(LEDYello1, LOW);   //ไฟเหลืองทางที่ 3 ดับ
  digitalWrite(LEDYello4, LOW);   //ไฟเหลืองทางที่ 4 ดับ
  
}


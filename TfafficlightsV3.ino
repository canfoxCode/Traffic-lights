#define LEDGreen1 D0 
#define LEDYello1 D1
#define LEDRed1 D2

#define LEDGreen2 D3
#define LEDYello2 D4
#define LEDRed2 D5

#define LEDGreen3 D6
#define LEDYello3 D7
#define LEDRed3 D8

#define LEDGreen4 D9   //Pin RX
#define LEDYello4 D10  //Pin TX
int LEDRed4 = 9;       //Pin SD2 || D11

void setup() {
  
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

void loop() {
  
  digitalWrite(LEDRed2, HIGH);    //ไฟแดงทางที่ 2 ติด
  digitalWrite(LEDRed3, HIGH);    //ไฟแดงทางที่ 3 ติด
  digitalWrite(LEDRed4, HIGH);    //ไฟแดงทางที่ 4 ติด
  delay(1000);                    //เป็นเวลา 1 วินาที
  digitalWrite(LEDRed1, LOW);     //ไฟแดงทางที่ 3 ดับs
  digitalWrite(LEDGreen1, HIGH);  //ไฟเขียวทางที่ 1 ติด
  delay(20000);                   //เป็นเวลา 20 วินาที 
  digitalWrite(LEDGreen1, LOW);   //ไฟเขียวทางที่ 1 ดับ

  digitalWrite(LEDYello1, HIGH);  //ไฟเหลืองทางที่ 1 ติด
  delay(3000);                    //เป็นเวลา 3 วินาที
  digitalWrite(LEDYello1, LOW);   //ไฟเหลืองทางที่ 1 ดับ

  digitalWrite(LEDRed1, HIGH);    //ไฟแดงทางที่ 1 ติด
  delay(1000);                    //เป็นเวลา 1 วินาที
  digitalWrite(LEDRed2, LOW);     //ไฟแดงทางที่ 2 ดับ
  digitalWrite(LEDGreen2, HIGH);  //ไฟเขียวทางที่ 2 ติด
  delay(20000);
  digitalWrite(LEDGreen2, LOW);   //ไฟเขียวทางที่ 2 ดับ

  digitalWrite(LEDYello2, HIGH);  //ไฟเหลืองทางที่ 2 ติด
  delay(3000);                    //เป็นเวลา 3 วินาที
  digitalWrite(LEDYello2, LOW);   //ไฟเหลืองทางที่ 2 ดับ

  digitalWrite(LEDRed2, HIGH);    //ไฟแดงทางที่ 2 ติด
  delay(1000);                    //เป็นเวลา 1 วินาที
  digitalWrite(LEDRed3, LOW);     //ไฟแดงทางที่ 3 ดับ
  digitalWrite(LEDGreen3, HIGH);  //ไฟเขียวทางที่ 3 ติด
  delay(20000);                   //เป็นเวลา 20 วินาที
  digitalWrite(LEDGreen3, LOW);   //ไฟเขียวทางที่ 3 ดับ

  digitalWrite(LEDYello3, HIGH);  //ไฟเหลืองทางที่ 3 ติด
  delay(3000);                    //เป็นเวลา 3 วินาที
  digitalWrite(LEDYello3, LOW);   //ไฟเหลืองทางที่ 3 ดับ
  
  digitalWrite(LEDRed3, HIGH);    //ไฟแดงทางที่ 2 ติด
  delay(1000);                    //เป็นเวลา 1 วินาที
  digitalWrite(LEDRed4, LOW);     //ไฟแดงทางที่ 3 ดับ
  digitalWrite(LEDGreen4, HIGH);  //ไฟเขียวทางที่ 3 ติด
  delay(20000);                   //เป็นเวลา 20 วินาที
  digitalWrite(LEDGreen4, LOW);   //ไฟเขียวทางที่ 4 ดับ

  digitalWrite(LEDYello4, HIGH);  //ไฟเหลืองทางที่ 4 ติด
  delay(3000);                    //เป็นเวลา 3 วินาที
  digitalWrite(LEDYello4, LOW);   //ไฟเหลืองทางที่ 4 ดับ
  
}

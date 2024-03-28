/******************************************************************************************
 * FileName     : 02._led_blue_blink
 * Description  : 파랑 LED 켰다 껐다 해 보기
 * Author       : 오경석
 * Created Date : 2023.10.24
 * Reference    :
 * Modified     : 2024.03.27 : PEJ : 주석 수정
******************************************************************************************/


// global variable
int led_blue = D3;                        // 파랑 LED 핀 지정


// setup
void setup() {
  pinMode(led_blue, OUTPUT);              // 파랑 LED를 출력 모드로 설정
}


// main loop
void loop() {
  digitalWrite(led_blue, HIGH);           // 파랑 LED 켜기
  delay(2000);                            // 2초 기다리기

  digitalWrite(led_blue, LOW);            // 파랑 LED 끄기   
  delay(2000);                            // 2초 기다리기 
}


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
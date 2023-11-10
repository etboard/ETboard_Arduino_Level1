/******************************************************************************************
 * FileName     : 01._led_blue_turn_on.Ex
 * Description  : 파랑 LED 켜보기
 * Author       : 오경석
 * Created Date : 2023.10.24
 * Reference    :
 * Modified     :
******************************************************************************************/

int led_blue = D3;                       // 파랑 LED 지정

void setup() {
  pinMode(led_blue, OUTPUT);             // 파랑 LED를 출력으로 설정
}

void loop() {
  digitalWrite(led_blue, HIGH);          // 파랑 LED 켜기
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================

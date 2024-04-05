/******************************************************************************************
 * FileName     : 09._red_led_button_control
 * Description  : 빨강 버튼 눌러서 빨강 LED 켜 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     :
******************************************************************************************/

int led_red = D2;                               // 빨강 LED 지정
int button_red = D6;                            // 빨강 버튼 지정
int button_red_state = 0;                       // 빨강 버튼 상태 설정

void setup() {
  pinMode(led_red, OUTPUT);                     // 빨강 LED를 출력으로 설정
  pinMode(button_red, INPUT);                   // 빨강 버튼을 입력으로 설정

  Serial.begin(115200);                         // 시리얼 통신 설정
}

void loop() {
  button_red_state = digitalRead(button_red);   // 빨강 버튼 상태 값 저장

  if(button_red_state == LOW){                  // 빨강 버튼을 누르면
    digitalWrite(led_red, HIGH);                // 빨강 LED 켜기
    Serial.println("빨강 버튼이 눌림");         // 시리얼 모니터에 "빨강 버튼이 눌림" 출력
  }

  if(button_red_state == HIGH){                 // 빨강 버튼을 누르지 않으면
    digitalWrite(led_red, LOW);                 // 빨강 LED 끄기
    Serial.println("버튼이 눌리지 않음");       // 시리얼 모니터에 "버튼이 눌리지 않음" 출력
  }
  delay(100);                                   // 0.1초 기다리기
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
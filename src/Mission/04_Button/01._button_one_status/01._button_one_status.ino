/******************************************************************************************
 * FileName     : 01._button_one_status
 * Description  : 파랑 버튼 눌렀다 뗐다 해 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     : 2024.03.27 : PEJ : 파일명, 주석 수정
******************************************************************************************/


// global variable
int button_blue = D7;                                // 파랑 버튼 핀 지정


// setup
void setup() {
  pinMode(button_blue, INPUT);                       // 파랑 버튼을 입력 모드로 설정

  Serial.begin(115200);                              // 시리얼 통신 속도 설정
}


// main loop
void loop() {
  int button_blue_value = digitalRead(button_blue);  // 파랑 버튼의 값을 저장

  if (button_blue_value == LOW) {                    // 파랑 버튼의 값이 LOW라면
    // 시리얼 모니터에 "파랑 버튼이 눌림" 출력
    Serial.println("파랑 버튼이 눌림");
  }

  if (button_blue_value == HIGH) {                   // 파랑 버튼의 값이 LOW가 아니라면
    // 시리얼 모니터에 "파랑 버튼이 눌리지 않음" 출력
    Serial.println("파랑 버튼이 눌리지 않음");
  }

  delay(100);                                        // 0.1초 기다리기
}


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================

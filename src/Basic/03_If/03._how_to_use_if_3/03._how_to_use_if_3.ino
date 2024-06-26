/******************************************************************************************
   FileName     : 07._how_to_use_if_3
   Description  : if 조건문 알아보기_3
   Description  : 점수를 비교해 성적을 출력해 보기
   Author       : 박은정
   Created Date : 2024.03.25
   Reference    :
   Modified     :
******************************************************************************************/


// global variable
int score = 73;                                  // score 변수에 73 저장


// setup
void setup() {
  Serial.begin(115200);                         // 시리얼 통신 속도 설정
}


// main loop
void loop() {
  if (score >= 90) {                             // score의 값이 90보다 같거나 크다면
    Serial.println("성적은 A입니다.");           // 시리얼 모니터에 "성적은 A입니다." 출력
    delay(1000);                                 // 1초 기다리기
  }
  else if (score >= 80) {                        // score의 값이 80보다 같거나 크다면
    Serial.println("성적은 B입니다.");           // 시리얼 모니터에 "성적은 B입니다." 출력
    delay(1000);                                 // 1초 기다리기
  }
  else if (score >= 70) {                        // score의 값이 70보다 같거나 크다면
    Serial.println("성적은 C입니다.");           // 시리얼 모니터에 "성적은 C입니다." 출력
    delay(1000);                                 // 1초 기다리기
  }
  else if (score >= 60) {                        // score의 값이 60보다 같거나 크다면
    Serial.println("성적은 D입니다.");           // 시리얼 모니터에 "성적은 D입니다." 출력
    delay(1000);                                 // 1초 기다리기
  }
  else {                                         // score의 값이 60보다 작다면
    Serial.println("성적은 F입니다.");           // 시리얼 모니터에 "성적은 F입니다." 출력
    delay(1000);                                 // 1초 기다리기
  }
}


//==========================================================================================
//
// (주)한국공학기술연구원 http://et.ketri.re.kr
//
//==========================================================================================

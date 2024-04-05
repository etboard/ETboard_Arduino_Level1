/******************************************************************************************
 * FileName     : 05._find_out_if_conditional_statements_1
 * Description  : if 조건문 알아보기_1
 * Description  : A값이 LOW와 같으면 시리얼 모니터에 "A값은 LOW 입니다." 출력해 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     :
******************************************************************************************/

int A = LOW;                                   // A 라는 변수에 LOW 넣기

void setup() {
Serial.begin(115200);                          // 시리얼 통신 설정
}

void loop() {
  // A값이 LOW와 같으면 시리얼 모니터에 "A값은 LOW 입니다." 출력하기
  
  if(A == LOW){                                 // A에 들어있는 값이 LOW 와 같으면
    Serial.println("A값은 LOW 입니다.");        // 시리얼 모니터에 "A값은 LOW 입니다."를 출력
    delay(1000);                                // 1초 기다리기
  }
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================

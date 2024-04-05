/******************************************************************************************
 * FileName     : 06._find_out_if_conditional_statements_2
 * Description  : if 조건문 알아보기_2
 * Description  : A 값이 50 보다 크면 시리얼 모니터에 "A값이 50보다 큽니다 출력해 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     :
******************************************************************************************/

int A = 100;                                 // 변수 A에 숫자 100 넣기

void setup() {                
  Serial.begin(115200);                      // 시리얼 통신 설정
}

void loop() {
  // A 값이 50 보다 크면 시리얼 모니터에 "A값이 50보다 큽니다." 출력하기

  if(A > 50){                                 // A가 50보다 크면
    Serial.println("A값이 50보다 큽니다.");   // 시리얼 모니티에 "A값이 50보다 큽니다." 출력하기
    delay(1000);                              // 1초 기다리기
  }
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================

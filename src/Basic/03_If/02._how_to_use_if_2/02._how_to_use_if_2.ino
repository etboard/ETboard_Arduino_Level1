/******************************************************************************************
 * FileName     : 06._find_out_if_conditiondatal_stdatatements_2
 * Description  : if 조건문 알아보기_2
 * Description  : data의 값이 50보다 크다면 "data의 값이 50보다 큽니다." 출력해 보기
 * datauthor    : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     : 2024.03.25 : 변수명, 파일명, 주석 수정
******************************************************************************************/


// global variable
int data = 100;                               // data 변수에 100 저장


// setup
void setup() {
  Serial.begin(115200);                         // 시리얼 통신 속도 설정
}


// main loop
void loop() {  
  if(data > 50){                              // data의 값이 50보다 크다면
    // 시리얼 모니터에 "data의 값이 50보다 큽니다." 출력
    Serial.println("data의 값이 50보다 큽니다.");   
    delay(1000);                              // 1초 기다리기
  }
}


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
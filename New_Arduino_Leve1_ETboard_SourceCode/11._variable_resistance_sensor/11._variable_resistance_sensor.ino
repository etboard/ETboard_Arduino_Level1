/******************************************************************************************
 * FileName     : 11._variable_resistance_sensor
 * Description  : 가변 저항 센서 값 출력해 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     :
******************************************************************************************/

int sensor = A0;                        // 가변저항 센서 지정
int sensor_result = 0;                  // 가변저항 센서 결과 값 설정

void setup() {
  Serial.begin(115200);                // 시리얼 통신 설정
}

void loop() {
  sensor_result = analogRead(sensor);   // 가변 저항 센서 결과 값 저장

  Serial.println(sensor_result);       // 시리얼 모니터에 가변저항 결과 값 출력
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================

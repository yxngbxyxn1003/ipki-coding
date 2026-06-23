// 초기화 되지 않은 배열의 특정 요소 값 출력하기
#include <stdio.h>

 void main(){
    short student[20];

    student[1] = 10;
    printf("%d %d", student[1] , student[2]);
 } 

 // student[1]은 10으로 초기화 되었지만 student[2]는 초기화 되지 않았기 때문에 쓰레기 값이 출력된다.
// 배열의 특정 요소에 값 대입하기

#include <stdio.h>
void main(){
    // [ ] 안에 상수를 적지 않고 count 변수를 적으면 오류가 발생한다. 
    // 배열의 크기는 상수여야 하기 때문이다. 
    // 배열의 크기는 컴파일 타임에 결정되어야 한다 -> 배열의 크기를 변수로 지정할 수 없다.
    short student[20]; 

    student[1]  = 10;
    printf("%d" , student[1]);
}


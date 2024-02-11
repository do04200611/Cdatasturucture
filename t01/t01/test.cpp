// 평균을 구하는 코드
#include <stdio.h>

int calculate_sum(int* array); // calculate_sum을 변수로 선언

int main(void) {
    int sum, i, average; // sum(합)과 i(반복 변수), average(평균)를 변수 선언
    int num[10];// 배열의 크기를 10으로 지정

    for (i = 0; i < 10; i++) 
        scanf("%d", &num[i]); // 배열 입력받음

    sum = calculate_sum(num); 
    average = sum / 10; // 평균 구하기
    printf("%d\n", average); 
    return 0;// 0을 반환
}

int calculate_sum(int* array) { // 배열을 매개변수로 선언
    int sum, i;// sum과 i 선언
    sum = 0; // sum을 0으로 초기화

    for (i = 0; i < 10; i++)
        sum = sum + array[i]; //배열의 각 요소를 sum에 더함

    return sum; //sum반환
}

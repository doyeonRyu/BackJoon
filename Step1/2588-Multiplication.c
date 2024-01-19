/*
Problem: 2588
    (1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때
    (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
Input e.g.:
    472
    385
Output e.g.:
    2360
    3776
    1416
    181720

Summary of file: 
    제곱을 구하는 함수인 pow()를 사용하기 위해 <math.h>를 추가했다.
    num1, num2로 세 자리 정수를 입력받았고
    정수형 배열인 token으로 num2의 각 자리 수를 따로 저장했다.
    정수형 배열인 num3으로 3, 4, 5의 값을 얻었고
    최종 결과를 구하는 정수형 변수 fin에 각 자리 수에 맞게 10을 곱해 전부 합해서 최종 곱셈 합을 구했다.
*/
#include <stdio.h>
#include <math.h> // To use the pow() function

int main() {
    
    int num1, num2, token[3], nums[3];
    int fin = 0;
    
    scanf("%d", &num1);
    scanf("%d", &num2); 
    
    for(int i=0; i<3; i++) {
        token[i] = num2 % 10;
        num2 /= 10;
    }
    
    for(int i=0; i<3; i++) {
        nums[i] = num1 * token[i];
        printf("%d\n", nums[i]);
        fin = fin + (nums[i] * pow(10, i));
    }
    printf("%d\n", fin);

    return 0;
}

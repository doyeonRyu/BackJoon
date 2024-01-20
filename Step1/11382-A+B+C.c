/*
Problem: 11382
    A + B + C
Input e.g.:
    A값 B값 C값
    (*1 <= A, B, C <= 10^12)
Output e.g.:
    A + B + C

Summary of file: 
    A, B, C의 범위 조건을 지키기 위해 int보다 넓은 범위가 가능한 long long 타입을 선언하였다.
    이 때 "%d"가 아닌 "%lld"를 사용해야 한다.
*/

#include <stdio.h>

int main()
{
    long long A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);
    
    printf("%lld\n", A + B + C);
    
    return 0;
}
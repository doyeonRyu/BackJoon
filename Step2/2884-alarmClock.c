/*
Problem: 2480
    현재 시간과 오븐에 구워야 하는 시간의 합을 구해 오븐에서 꺼낼 시간 구하기
Input e.g.:
    시 분
Output e.g.:
    오븐에 구워야 하는 시간

Summary of file: 
    현재 시간과 오븐에 구워야 하는 시간의 합을 구할 때 주의할 점:
        1. 분 60분이 넘으면 시가 그에 맞게 1씩 증가해야 함
        2. 23시 다음은 0시부터 다시 시작

*/

#include <stdio.h>

int main()
{
    int a, b, c;
    int h = 0;

    scanf("%d %d\n%d", &a, &b, &c);

    b = b + c;

    if (b >= 60) {
        while (b >= 60) {
            b = b - 60;
            h++;
        }
        a = a + h;
    }

    if ( a >= 24) {
        a = a - 24;
    }

    printf("%d %d\n", a, b);

    return 0;
}
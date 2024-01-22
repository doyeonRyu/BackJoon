/*
Problem: 2480
    세 주사위 값 비교 후 가격 구하기
Input e.g.:
    4 4 6
Output e.g.:
    1400

Summary of file: 
    세 주사위를 던져
    세 숫자가 동일할 때: 10,000 + 동일한 숫자 값 x 1,000(원)
    두 숫자만 동일할 때: 1,000 + 동일한 숫자 값 x 100(원)
    겹치지 않을 때: 가장 큰 값 x 100(원) 
    출력

    주석에 있는 코드:
        세 가지 변수, 즉 세 주사위에 1-6 사이의 숫자를 무작위로 할당하여 숫자 비교 후 가격 구하기
    문제 코드:
        세 주사위 값을 키보드 입력 받아 숫자 비교 후 가격 구하기
*/
#include <stdio.h>

/*
#include <stdio.h>
#include <stdlib.h> // for rand()
#include <time.h> // for rand()

int main()
{
    srand(time(NULL));

    int a, b, c;
    a = rand() % 6 + 1; // 1-6까지 값 할당
    b = rand() % 6 + 1;
    c = rand() % 6 + 1;

    // 세 주사위 값 모두 동일할 때
    if (a == b && a == c && b == c) { 
        printf("%d\n", 10000 + a * 1000);
    }
    // 두 주사위 값만 동일할 때
    else if (a == b || a == c) {
        printf("%d\n", 1000 + a * 100);
    }
    else if (b == c) {
        printf("%d\n", 1000 + b * 100);
    }

    // 세 주사위 값 전부 다를 때
    else {
        int max;
        if (a > b && a > c) {
            max = a;
        }
        else if (b > a && b > c) {
            max = b;
        }
        else if (c > a && c > b) {
            max = c;
        }
        printf("%d\n", max * 100);
    }

    return 0;
}
*/

int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); // 세 주사위 값 입력 받기

    // 세 주사위 값 모두 동일할 때
    if (a == b && a == c && b == c) {
        printf("%d\n", 10000 + a * 1000);
    }
    // 두 주사위 값만 동일할 때
    else if (a == b || a == c) {
        printf("%d\n", 1000 + a * 100);
    }
    else if (b == c) {
        printf("%d\n", 1000 + b * 100);
    }

    // 세 주사위 값 전부 다를 때
    else {
        int max;
        if (a > b && a > c) {
            max = a;
        }
        else if (b > a && b > c) {
            max = b;
        }
        else if (c > a && c > b) {
            max = c;
        }
        printf("%d\n", max * 100);
    }

    return 0;
}
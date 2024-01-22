#include <stdio.h>

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int a, b, c;
    a = rand() % 6 + 1;
    b = rand() % 6 + 1;
    c = rand() % 6 + 1;

    if (a == b && a == c && b == c) {
        printf("%d\n", 10000 + a * 1000);
    }
    else if (a == b || a == c) {
        printf("%d\n", 1000 + a * 100);
    }
    else if (b == c) {
        printf("%d\n", 1000 + b * 100);
    }
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
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && a == c && b == c) {
        printf("%d\n", 10000 + a * 1000);
    }
    else if (a == b || a == c) {
        printf("%d\n", 1000 + a * 100);
    }
    else if (b == c) {
        printf("%d\n", 1000 + b * 100);
    }
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
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    scanf("%d %d\n%d", &a, &b, &c);

    if ((b + c) >= 60) {
        b = 60 - abs(c - b);
        if (a == 23) {
            a = 0;
        }
        else {
            a = a + 1; 
        }
    } 
    else if ( (b + c) < 60) {
        b = b + c;
    }

    printf("%d %d", b, c);

    return 0;
}
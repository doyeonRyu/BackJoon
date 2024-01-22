/*
Problem: 2480
    �� �ֻ��� �� �� �� ���� ���ϱ�
Input e.g.:
    4 4 6
Output e.g.:
    1400

Summary of file: 
    �� �ֻ����� ����
    �� ���ڰ� ������ ��: 10,000 + ������ ���� �� x 1,000(��)
    �� ���ڸ� ������ ��: 1,000 + ������ ���� �� x 100(��)
    ��ġ�� ���� ��: ���� ū �� x 100(��) 
    ���

    �ּ��� �ִ� �ڵ�:
        �� ���� ����, �� �� �ֻ����� 1-6 ������ ���ڸ� �������� �Ҵ��Ͽ� ���� �� �� ���� ���ϱ�
    ���� �ڵ�:
        �� �ֻ��� ���� Ű���� �Է� �޾� ���� �� �� ���� ���ϱ�
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
    a = rand() % 6 + 1; // 1-6���� �� �Ҵ�
    b = rand() % 6 + 1;
    c = rand() % 6 + 1;

    // �� �ֻ��� �� ��� ������ ��
    if (a == b && a == c && b == c) { 
        printf("%d\n", 10000 + a * 1000);
    }
    // �� �ֻ��� ���� ������ ��
    else if (a == b || a == c) {
        printf("%d\n", 1000 + a * 100);
    }
    else if (b == c) {
        printf("%d\n", 1000 + b * 100);
    }

    // �� �ֻ��� �� ���� �ٸ� ��
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
    scanf("%d %d %d", &a, &b, &c); // �� �ֻ��� �� �Է� �ޱ�

    // �� �ֻ��� �� ��� ������ ��
    if (a == b && a == c && b == c) {
        printf("%d\n", 10000 + a * 1000);
    }
    // �� �ֻ��� ���� ������ ��
    else if (a == b || a == c) {
        printf("%d\n", 1000 + a * 100);
    }
    else if (b == c) {
        printf("%d\n", 1000 + b * 100);
    }

    // �� �ֻ��� �� ���� �ٸ� ��
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
/*
Problem: 11382
    A + B + C
Input e.g.:
    A�� B�� C��
    (*1 <= A, B, C <= 10^12)
Output e.g.:
    A + B + C

Summary of file: 
    A, B, C�� ���� ������ ��Ű�� ���� int���� ���� ������ ������ long long Ÿ���� �����Ͽ���.
    �� �� "%d"�� �ƴ� "%lld"�� ����ؾ� �Ѵ�.
*/

#include <stdio.h>

int main()
{
    long long A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);
    
    printf("%lld\n", A + B + C);
    
    return 0;
}
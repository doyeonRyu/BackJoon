/*
Problem: 2588
    (1)�� (2)��ġ�� �� �� �ڸ� �ڿ����� �־��� ��
    (3), (4), (5), (6)��ġ�� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input e.g.:
    472
    385
Output e.g.:
    2360
    3776
    1416
    181720

Summary of file: 
    ������ ���ϴ� �Լ��� pow()�� ����ϱ� ���� <math.h>�� �߰��ߴ�.
    num1, num2�� �� �ڸ� ������ �Է¹޾Ұ�
    ������ �迭�� token���� num2�� �� �ڸ� ���� ���� �����ߴ�.
    ������ �迭�� num3���� 3, 4, 5�� ���� �����
    ���� ����� ���ϴ� ������ ���� fin�� �� �ڸ� ���� �°� 10�� ���� ���� ���ؼ� ���� ���� ���� ���ߴ�.
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

/*Write a C program to check whether a number is prime,Armstrong or perfect
 * number using dunctions.*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, i, flag = 0;
    printf("������һ������");
    scanf("%d", &x);
    for (i = 2; i < x; i++)
        if (x % i == 0)
            flag = 1; //�ж��Ƿ�����
    if (flag == 0)
        printf("�������������\n");
    int b = x;
    for (i = 0; b != 0; b /= 10, i++)
        ; //�ж�λ��
    int j, sum = 0, a[10];
    for (j = 0, b = x; j < i; j++, b /= 10)
        a[j] = b % 10;
    for (j = 0; j < i; j++)
        sum += pow(a[j], i); //�ж��Ƿ�ķ˹������
    if (sum == x)
        printf("������ǰ�ķ˹��������\n");
    for (j = 1, sum = 0; j < x; j++)
        if (x % j == 0)
            sum += j; //�ж��Ƿ�������
    if (sum == x)
        printf("���������������\n");
}
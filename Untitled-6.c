/*����Ҫ���д���򣬼���4�������ĺ���ƽ��ֵ����Ŀ��֤����������������ͷ�Χ�ڡ�*/
#include <stdio.h>
int main(void)
{
    int a, b, c, d, Sum;
    float Average;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    Sum = a + b + c + d;
    Average = 1.0 * Sum / 4;
    printf("Sum = %d; Average = %.1f", Sum, Average);
}
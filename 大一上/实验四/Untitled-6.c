/*��д���򣬸�������������ε�������a��b��c�����㲢���������ܳ���ע�⣺��һ���������У� ��������֮�ʹ��ڵ����ߡ�
������������㹫ʽ��area=��s(s�6�1a)(s�6�1b)(s�6�1c)������s=(a+b+c)/2��*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c;
    double s, area, perimeter;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        perimeter = a + b + c;
        printf("area = %.2lf; perimeter = %.2lf", area, perimeter);
    }
    else
        printf("These sides do not correspond to a valid triangle");
}
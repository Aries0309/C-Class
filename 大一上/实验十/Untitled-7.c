/*��дһ�����򣬳���Ĺ���������������ͬ���ȵ��ַ�����������г���ֵ����ַ�������Ҫ����ʹ��strlen�⺯����*/
#include <stdio.h>
int main()
{
    char a[100], b[100];
    gets_s(a);
    gets_s(b);
    int i, j;
    for (i = 0; a[i] != '\0'; i++)
        ;
    for (j = 0; b[j] != '\0'; j++)
        ;
    if (i > j)
        puts(a);
    else
        puts(b);
}
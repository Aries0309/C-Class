/*ͳ���ַ����ִ���
����Ҫ���д����ͳ�Ʋ����ĳ�����ַ��ڸ����ַ����г��ֵĴ�����*/
#include <stdio.h>
int main(void)
{
    char a[80], b;
    int i = 0, n = 0;
    while ((a[i] = getchar()) != '\n')
        i++;
    a[i] = '\0';
    b = getchar();
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] == b)
            n++;
    printf("%d", n);
}
/*�ַ�����ĸ��Сдת��
����Ҫ���д���򣬶�һ���ԡ�#���������ַ���������Сд��ĸȫ��ת���ɴ�д��ĸ���Ѵ�д��ĸȫ��ת����Сд��ĸ�������ַ����������*/
#include <stdio.h>
int main(void)
{
    char a[30];
    int i = 0;
    while ((a[i] = getchar()) != '#')
        i++;
    a[i] = '\0';
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            printf("%c", (a[i] + 32));
        else if (a[i] >= 'a' && a[i] <= 'z')
            printf("%c", (a[i] - 32));
        else
            printf("%c", a[i]);
    }
}
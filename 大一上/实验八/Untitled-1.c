/*ͳ�ƴ�д������ĸ
Ӣ�ĸ�����ĸ�ǳ�A��E��I��O��U�������ĸ������Ҫ���д����ͳ�Ƹ����ַ����д�д������ĸ�ĸ�����*/
#include <stdio.h>
int main(void)
{
    char a[80];
    int i = 0, n = 0;
    while ((a[i] = getchar()) != '\n')
        i++;
    a[i] = '\0';
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] >= 'A' && a[i] <= 'Z')
            if (a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U')
                n++;
    printf("%d", n);
}
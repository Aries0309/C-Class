/*ɾ���ظ��ַ�
����Ҫ���д���򣬽������ַ���ȥ���ظ����ַ��󣬰����ַ�ASCII��˳���С��������������*/
#include <stdio.h>
int main(void)
{
    char a[80], b[80];
    int i = 0, flag = 0, k, n = 0;
    while ((a[i] = getchar()) != '\n')
        i++;
    a[i] = '\0';
    for (i = 0; a[i] != '\0'; i++)
    {
        flag = 0;
        for (k = i - 1; k >= 0; k--)
            if (a[k] == a[i])
                flag = 1;
        if (!flag)
        {
            b[n] = a[i];
            n++;
        }
    }
    b[n] = '\0';
    for (k = 0; k < 128; k++)
        for (n = 0; b[n] != '\0'; n++)
            if (b[n] == k)
                printf("%c", b[n]);
}
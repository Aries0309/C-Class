/*��дһ�����򣬳���Ĺ���������һ���ַ���str���ַ�ch���ж���ch�������ַ���str�У���������һ�γ��ֵ�λ�ã��������0��*/
#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, k = 0;
    gets_s(str);
    ch = getchar();
    for (i = 0; str[i] != '\0'; i++)
        if (ch == str[i])
            k = i + 1;
    printf("%d", k);
}
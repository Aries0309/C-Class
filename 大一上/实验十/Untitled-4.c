/*��һ��/ ** / ֮����ճ���sample4.c������Ĺ����ǽ��ַ����� '0'�� '8'�������ַ���Ϊ������1�������ַ����� '9'��Ϊ '0'��*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[128], str2[128];
    int i, len;
    printf("Please input a strings:\n");
    gets_s(str1);
    len = strlen(str1);
    /**/
    for (i = 0; str1[i] != '\0'; i++) /**/
    {
        if (str1[i] >= '0' && str1[i] <= '8')
            str2[i] = str1[i] + 1;
        else if (/**/ str1[i] == '9' /**/)
            str2[i] = '0';
        else
            str2[i] = str1[i];
    }
    /**/ str2[i] = '\0'; /**/
    puts(str2);
    return 0;
}
#include <stdio.h>
int main()
{
    int i = 0;
    char ch[] = "##Hello#World!#";
    while (1) //ѭ�����ַ�����β'\0'
    {
        for (; ch[i] == '#'; i++)
            ; //# i++ #�����
        if (ch[i] == '\0')
            break;
        else
        {
            printf("%c", ch[i]);
            i++;
        }
        printf("OK\n"); //ѭ�������OK
    }
}
#include <stdio.h>
#include <string.h>
void main()
{
    char str[] = "Students";
    str[3] = '\0'; //ԭ��Ϊd
    printf("%d,%d", strlen(str), sizeof(str));
}
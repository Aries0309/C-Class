#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "ABCDEF", s2[] = "abc";
    strcpy(s1 + 1, s2); // s1[0]���� ��s1[1]�滻 s2��'\0'
    printf("%s %c", s1, s1[5]);
}
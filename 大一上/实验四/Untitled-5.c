/*��дһ����������һ���ַ����������ĸ��Ӧ�������ڼ���
Ҫ��
1������getchar��������һ����ĸ��
2�����
���롮S���������Today is Sunday.����
���롮M���������Today is Monday.����
���롮T���������Today is Tuesday.����
���롮W���������Today is Wednesday.����
���롮t���������Today is Thursday.����
���롮F���������Today is Friday.����
���롮s���������Today is Saturday.����
������������ַ��������Error������
3����switch���ʵ�֡�*/
#include <stdio.h>
int main(void)
{
    char a;
    a = getchar();
    switch (a)
    {
    case 'S':
        printf("Today is Sunday.");
        break;
    case 'M':
        printf("Today is Monday.");
        break;
    case 'T':
        printf("Today is Tuesday.");
        break;
    case 'W':
        printf("Today is Wednesday.");
        break;
    case 't':
        printf("Today is Thursday.");
        break;
    case 'F':
        printf("Today is Friday.");
        break;
    case 's':
        printf("Today is Saturday.");
        break;
    default:
        printf("Error!");
    }
}
/*��дһ����������һ�����������ж�������������ż����������жϽ����Ҫ��
1������scanf��������һ����������
2������if-else˫��֧�ṹ��
3����������������Ϊ�����������This is an odd number�����������ż���������This is an even number!����*/
#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("This is an even number!");
    else
        printf("This is an odd number!");
}
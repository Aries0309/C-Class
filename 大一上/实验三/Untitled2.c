/*��дһ�����򣬽����������Сд��ĸת���ɴ�д��ĸ��Ҫ��
1����getchar������������Сд��ĸ��
2��ת���ɴ�д��ĸ��
3��ת����ֱ���putchar��printf���������������д��ĸ��*/
#include <stdio.h>
int main(void)
{
    char a, b, c, d;
    a = getchar();
    c = getchar();
    b = a - 32;
    d = c - 32;
    printf("%c%c", b, d);
    return 0;
}

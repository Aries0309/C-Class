/*
* ָ���++/--�ͼ�����á��Ķ�д�������Ȼ����֤��
*/
#include <stdio.h>
int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int *p = NULL;
    p = a;
    printf("%d, %d\n", p - a, *p);
    printf("%d, %d\n", p - a, *(++p));
    printf("%d, %d\n", p - a, *++p);
    printf("%d, %d\n", p - a, *(p--));
    printf("%d, %d\n", p - a, *p++);
    printf("%d, %d\n", p - a, *p);
    printf("%d, %d\n", p - a, (*p)++);
    printf("%d, %d\n", p - a, *p);
    printf("%d, %d\n", p - a, ++(*p));
    printf("%d, %d\n", p - a, *p);
    return 0;
}
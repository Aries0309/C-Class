/*C program to search element in array using pointers*/
#include <stdio.h>
int main(void)
{
    int a[100], i, *p = a, n, k;
    printf("����������������������������ݣ�");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    printf("��������Ҫ�ҵ���");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
        if (*(p + i) == k)
            printf("��Ҫ�ҵ����ڵ�%d��", i);
}
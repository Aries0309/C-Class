/*C program to find maximum and minimum using functions*/
#include <stdio.h>
int main(void)
{
    int max, mini, func[100], n, i;
    int *p = func;
    printf("�����뺯���Ĵ�С��");
    scanf("%d", &n);
    printf("�����뺯�������ݣ�");
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    max = mini = *p;
    for (i = 0; i < n; i++)
    {
        if (*(p + i) > max)
            max = *(p + i);
        if (*(p + i) < mini)
            mini = *(p + i);
    }
    printf("���ֵ�ǣ�%d   ��Сֵ�ǣ�%d", max, mini);
}
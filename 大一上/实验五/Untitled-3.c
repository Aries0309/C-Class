/*��дһ��������1��999֮�������ͬ������һ��������������ƽ�������Ҷˣ��������Ϊͬ������*/
#include <stdio.h>
int main(void)
{
    int i = 1, a[1000], b;
    a[i] = 1;
    while (i <= 999)
    {
        if (a[i] / 10 == 0)
        {
            if ((a[i] * a[i]) % 10 == a[i])
                printf("%d ", a[i]);
        }
        else if (a[i] / 100 == 0)
        {
            if ((a[i] * a[i]) % 100 == 0)
                printf("%d ", a[i]);
        }
        else if ((a[i] * a[i]) % 1000 == a[i])
            printf("%d ", a[i]);
        b = a[i];
        i++;
        a[i] = b + 1;
    }
}
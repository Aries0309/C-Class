/*��дһ�����򣬳���Ĺ��������100-200֮���������������ÿ�����5�������*/
#include <stdio.h>
int main(void)
{
    int n = 100, k, j, flag;
    for (j = 0; n <= 200; n++)
    {
        flag = 0;
        for (k = 2; k < n; k++)
            if (n % k == 0)
            {
                flag = 1;
                break;
            }
        if (!flag)
        {
            printf("%d ", n);
            j++;
            if (j > 4)
            {
                j = 0;
                printf("\n");
            }
        }
    }
}
/*��дһ����������һ��������N(N<=100)�Լ�N*N������,ʵ�ֽ�N*N�������������ȵķ�ʽ����ڶ�ά����a�У������N��N������е����ֵ�������������b�У��������*/
#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    int a[N][N], i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    int b[100], n = 0;
    for (i = 0; i < N; i++, n++)
    {
        b[n] = a[i][0];
        for (j = 1; j < N; j++)
            if (a[i][j] > b[n])
                b[n] = a[i][j];
    }
    for (n = 0; n < N; n++)
        printf("%d ", b[n]);
}
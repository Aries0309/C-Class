/*��дһ����������һ��������N(N<=100)�Լ�N*N������,ʵ�ֽ�N*N�������������ȵķ�ʽ����ڶ�ά����a�У����������a�����°����ǣ������Խ��ߣ���Ԫ�غ���Գ�Ԫ�ص�ƽ��ֵ�����浽һά����b�в������*/
#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    int a[N][N], i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    double b[8];
    int n = 0, k;
    for (i = 0; i < N; i++)
        for (j = 0; j < i; j++)
            b[n++] = (a[i][j] + a[j][i]) / 2.0;
    k = n + 1;
    for (n = 0; n < k; n++)
        printf("%.2lf ", b[n]);
}
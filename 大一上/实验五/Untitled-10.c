/*��дһ����������x��ֵ���������й�ʽ����cosx��ֵ��ֱ�����һ��С��10-6Ϊֹ��
cosx=1-(x^2)/2!+(x^4)/4!-(x^6)/6!=����*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, a, b, k, n = 2;
    scanf("%d", &x);
    double sum = 1, eps = 1;
    for (a = 1, b = 2; eps >= 1e-6; a++)
    {

        sum += pow(-1, a) * (pow(x, b) / n);
        b += 2;
        for (k = b - 1; k <= b; k++)
            n *= k; //��ĸ�׳�
        eps = pow(x, b) / n;
    }
    printf("%.2lf", sum);
}
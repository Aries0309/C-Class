/*��д��������������n,ʹ���ӡ����n�е�ͼ����
    @
   @@
  @@@
 @@@@
@@@@@*/
#include <stdio.h>
int main(void)
{
    int n, i, k, a;
    scanf("%d", &n);
    for (i = 1, k = n - 1; i <= n; i++, k--)
    {
        for (a = 0; a < k; a++)
            printf(" ");
        for (a = 0; a < i; a++)
            printf("@");
        printf("\n");
    }
}
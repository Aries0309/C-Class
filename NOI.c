/*���ڴ�������Sisyphus��Ҫ���ܳͷ���
��˹��Sisyphus��һ���ʯ�ϳ���ΪL��ɽ�¡�Sisyphus���������Ƶ��ٶ�Ϊÿ��v�ĳ��ȣ����������٣��ʾ���1/2�꽫��������v/2�ĳ��ȣ���Ȼ������˹����ϣ��Sisyphus̫�쵽��ɽ������˹����ʩչn��ħ��������˹ʩչ��i��ħ��(1��i��n)����Sisyphus��һ�ε���λ��a[i]ʱ��������ͬ��ʯһ�������ɽ�ף�����ͷ���𡣣������ʱ����Բ��ƣ����ɿ�����һ�ε���λ��a[i]��Sisyphus������ɽ�����³�����
������˹ʩ����a[i]=3��a[i]=5������ħ����Sisyphus���ٶ�v=1��ɽ�µĳ���L=6��������ʯ��ɽ�������£�
1.��3���ߵ���λ��3.
2.��a[i]=3��ħ��Ӱ�죬�ص���ɽ�׳�����
3.����3���ߵ�λ��3��Ȼ����Ϊ�ǵڶ��ε��a[i]=3��ħ���������á�
4.��2���ߵ�λ��5.
5.��a[i]=5��ħ��Ӱ�죬�ص���ɽ�׳�����
6.��6���ɽ���ߵ���ɽ�������ѵ���ʱ��Ϊ14�ꡣ
���ڣ���˹��q��ѯ�ʡ����ڵ�i��ѯ��t[i]����˹��֪������������Ҫʩչ���ٸ�ħ������ʹSisyphus����ɽ�����õ���������t[i]��*/
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int n, L, v;
    scanf("%d%d%d", &n, &L, &v);
    int a[n], i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), compare);
    double sumtime = 0;
    for (i = 0; i < n; i++)
        sumtime += a[i] * 1.0 / v;
    int q;
    scanf("%d", &q);
    int t[q];
    for (i = 0; i < q; i++)
        scanf("%d", &t[i]);
    for (i = 0; i < q; i++)
    {
        double sum = 0;
        float year = L / v;
        int retry = t[i] - year;
        int j = 0;
        if (t[i] < year)
            printf("0\n");
        else if (sumtime > retry)
        {
            while (retry > sum && j < n)
            {
                j++;
                for (int k = 0; k < j; k++)
                    sum += a[k] / v;
            }
            printf("%d\n", j - 1);
        }
        else
            printf("-1\n");
    }
}
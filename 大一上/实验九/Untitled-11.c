/*��ָ���������Ԫ�صķ�����дһ�����򣬳���Ĺ����Ǽ�����������score��12λѧ���ɼ���ƽ���֣���������ڻ����ƽ���ֵ����������в����Խ����int score[N]={67,78,66,79,73,82,69,85,77,80,93,72};*/
#include <stdio.h>
#define N 12
int main(void)
{
    int score[N] = {67, 78, 66, 79, 73, 82, 69, 85, 77, 80, 93, 72};
    int *p;
    int sum = 0;
    double avg;
    for (p = score; p < score + N; p++)
        sum += *p;
    avg = sum / N * 1.0;
    for (p = score; p < score + N; p++)
        if (*p >= avg)
            printf("%d ", *p);
}
/*�����дӢ����ĸ
����Ҫ���д����˳����������ַ����������ֹ��Ĵ�дӢ����ĸ��ÿ����ĸֻ���һ�飻���޴�дӢ����ĸ�������Not Found����*/
#include <stdio.h>
int main(void)
{
    char a[80];
    int i = 0, flag1 = 0, flag2 = 0, k;
    while ((a[i] = getchar()) != '\n')
        i++;
    a[i] = '\0';
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            flag1 = 0;
            for (k = i - 1; k >= 0; k--)
                if (a[k] == a[i])
                    flag1 = 1;
            if (!flag1)
                printf("%c", a[i]);
            flag2 = 1;
        }
    if (!flag2)
        printf("Not Found");
}
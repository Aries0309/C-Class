/*��дһ����������һ���ַ����б���ַ������֡�Ӣ�Ĵ�д��ĸ��Сд��ĸ���ո��������ַ���Ҫ��
1����getchar��������һ���ַ���
2������if-else if���֧�ṹ��
3�����������ַ�Ϊ���֣������This is a digit.
���������ַ�ΪӢ�Ĵ�д��ĸ�������This is a capital letter.
���������ַ�ΪӢ��Сд��ĸ�������This is a small letter.
����������ĸΪ�ո������This is a space.
���������������ַ��������This is an other character.*/
#include <stdio.h>
int main(void)
{
    char a;
    a = getchar();
    if (a >= 65 && a <= 90)
        printf("This is a capital letter.");
    else if (a <= 122 && a >= 97)
        printf("This is a small letter.");
    else if (a <= 57 && a >= 49)
        printf("This is a digit.");
    else if (a == 32)
        printf("This is a space.");
    else
        printf("This is an other character.");
}
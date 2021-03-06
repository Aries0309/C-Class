/*编写一个程序，输入华氏温度F，转换成摄氏温度C，并输出。
要求：
1）转换公式为：C=5/9*(F-32); 
2）调用scanf函数从键盘读入一个华氏温度赋给F；
3）利用公式算出对应的摄氏温度C；
4）调用printf函数输出摄氏温度，输出时取小数点后三位数字。*/
#include <stdio.h>
int main(void)
{
    float F, C;
    scanf("%f", &F);
    C = 5.0 / 9 * (F - 32);
    printf("%.3f", C);
    return 0;
}

#include<stdio.h>
int main()
{
  int a,b,c;
  /**/ float f; /**///f������ӦΪ������
  printf("Please input a b :");
  scanf("%d%d",/**/&a,&b/**/);//ȱ�ٵ�ַ��
  f=/**/  1.0*a/b; /**///a,b��Ϊ����
  c=(int)((f-(int)f)*10);
  printf("\n%f   %d\n",f,c);
  return 0;
}

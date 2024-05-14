#include<stdio.h>
void main()
{
  int a=0,b=0,R=0,GCD = 0;
  printf("Enter the numbers please: ");
  scanf("%d %d",&a,&b);
  R = a%b;
  a =b;
  b = R;
  while((a%b)>0)
  {
    R = a%b;
    a = b;
    b = R;
  }
  GCD = b;
  printf("GCD of two numbers %d\n",GCD);
}

#include<stdio.h>
void fibonaki(int count);
void fibonaki(int  count)
{
  long num1 = 0,num2 = 1, num3 = 0;
  printf(" The fibonaki series is 0,1");
  for(int i = 3;i<=count;i++)
  {
    num3 = num1 + num2;
    printf(",%ld",num3);
    num1 = num2;
    num2 = num3;
  }
}
void main()
{
  int  count  = 0;
  printf("Enter the number of the fibonaki elements you want to print\n");
  scanf("%d",&count);
  fibonaki(count);
}


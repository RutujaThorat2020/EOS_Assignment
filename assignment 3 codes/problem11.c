#include<stdio.h>
int main()
{
  int num = 0;
  int factorial = 1;
  printf("Enter the number whose factorial you want to find\n");
  scanf("%d",&num);
  for(int i =1;i<=num;i++)
  factorial *= i;
  printf("The factorial of the number is the %d\n",factorial);
}

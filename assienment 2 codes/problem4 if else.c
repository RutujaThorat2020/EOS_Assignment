#include<stdio.h>
void main()
{
  int num1 = 0,num2 = 0;
  printf("Enter the two numbers to find the maximum of them\n");
  printf("Num1 = :");
  scanf("%d",&num1);

  printf("Num2 = :");
  scanf("%d",&num2);

  if(num1>num2)
  printf("The greater number is %d\n",num1);
  else
  printf("The greater number is %d\n",num2);
}

#include<stdio.h>
long factorial(long number);
long factorial(long number)
{
  if(number != 0)
  return number*factorial(number-1);
  else
  return 1;
}
void main()
{
  long number = 0;
  printf("Enter the number whose factorial you want to find\n");
  scanf("%ld",&number);
  printf("factorial of the number %ld\n",factorial(number));
}

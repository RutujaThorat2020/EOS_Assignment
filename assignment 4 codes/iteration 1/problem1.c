#include<stdio.h>
long long unsigned int factorial(unsigned int num);


long long unsigned int factorial(unsigned int num)
{
   long int factorial = 1;
   for(int i = 1;i<=num;i++)
   factorial *= i;
   return factorial;
}
void main()
{
  int num = 0;
  printf("Enter the value whose factorial you want to print\n");
  scanf("%u",&num);
  printf("Factorial of the number is %llu\n",factorial(num));
}

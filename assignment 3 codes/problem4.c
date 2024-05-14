#include<stdio.h>
void main()
{
   int num = 0;
   int factorial = 1;
   int i = 1;
   printf("Enter the number to find the factorial\n");
   scanf("%d",&num);

   while(i<=num)
   {
     factorial *= i;
     i++;
   }
   printf("Factorial of the number is %d\n",factorial);
}

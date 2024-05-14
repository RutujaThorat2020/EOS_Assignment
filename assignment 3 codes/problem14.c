#include<stdio.h>
void main()
{
   int num = 0;
   int flag1 = 0;
   printf("Enter the number you want to check weather it is prime or not\n");
   scanf("%d",&num);
/*   if(num % num == 0 && num % 1)
   flag1 = 1;
   else
   flag1 = 0;*/
   for(int i = 2;i<num;i++)
   {
   if(num % i == 0)
   {flag1 = 1;
   break;}
   else
   flag1 = 0;
   }

   if(flag1 == 1)
   printf("Entered number is not prime number\n");
   else
   printf("Entered number is prime number\n");
   


}

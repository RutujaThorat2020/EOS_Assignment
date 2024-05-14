#include<stdio.h>
long fibonaki(long num1 ,long num2,int count);
long fibonaki(long num1,long num2,int count)
{

   long result;
   if(count != 0)
   {
   result = num1+num2;
   num1 = num2;
   num2 = result;
   count--;
   printf("%ld ",result);
   return fibonaki(num1,num2,count);
   }
   else
   {
     result = num1+num2;
     return result;
   }

}
void main()
{
  int count = 0;
  printf("Enter the count of numbers you want in the fibonaki series\n");
  scanf("%d",&count);
  printf("The fibonaki series is 0 1 ");
  fibonaki(0,1,count - 2);
  printf("\n");
}

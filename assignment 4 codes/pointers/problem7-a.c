#include<stdio.h>
long sum_product(long* a,char* opr,long* b);
long sum_product(long* a,char* opr,long* b)
{
   if(*opr == '+')
   return *a + *b;
   else if(*opr == '*')
   return *a * *b;
}
void main()
{
   long a=0 ,b=0;
   char opr= 0;
   printf("Enter the two values like this num1 +/* num2\n");
   scanf("%ld %c %ld",&a,&opr,&b);
   printf("result of the operation is %ld\n",sum_product(&a,&opr,&b));
}

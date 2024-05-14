#include<stdio.h>
long fibonaki(long num1,long num2);
long fibonaki(long num1,long num2)
{
    long num3=0,result = 0;
    num3 = num1+num2;
    result = num3;
  //  num1 = num2;
  //  num2 = num3;
    return result;
}
void main()
{
  int count = 0;
  long num1 = 0,num2 = 1,result = 0;
  printf("Enter the count of the numbers you want to print in the fibonaki series\n");
  scanf("%d",&count);
  printf("The Fibonaki is 0,1");
  for(int i = 3;i<=count;i++){
   result =  fibonaki(num1,num2);
   num1 = num2;
   num2 = result;
   printf(",%ld",result);
  }
  printf("\n");

}

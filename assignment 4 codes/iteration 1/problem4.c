#include<stdio.h>
#include"problem.h"
void main()
{
  //please consider the result as the flag
  double result = 0;
  double a = 0,b = 0;
  char opr = 0;
  printf("Enter the numbers with the operation like\n1.num1+num2\n2.num1-num2\n3.num1/num2\n4.num1*num2\n5.num1%%num2\n");
  scanf("%lf%c%lf",&a,&opr,&b);
  result = calculator(a,opr,b);
  if (result == -1)
  printf("Divison can't be performed because denominator can't be zero\n");
  else 
  printf("The result of the operation is %f\n",result);
}

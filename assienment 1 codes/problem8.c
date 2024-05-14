//Write a program to accept three integer numbers and find its average.
#include<stdio.h>
void main()
{
  float  num1 = 0,num2=0,num3=0;
  printf("Enter the three numbers to find there average\n");
  printf("number1 :" );
  scanf("%f",&num1);
  printf("\nnumber2 :" );
  scanf("%f",&num2);
  printf("\nnumber3 :" );
  scanf("%f",&num3);
  printf("Average of the Entered number is the %.2f\n",(num1+num2+num3)/3);
}

#include<stdio.h>
//Write a program to accept two numbers and display division of the two numbers. Check for
//divide by zero error. If divider is zero then display appropriate error message.
void main()
{
  float num1=0,num2=0;
  printf("Enter The two numbers\n");
  printf("num1 : ");
  scanf("%f",&num1);

  printf("\nnum2 : ");
  scanf("%f",&num2);
  if(num2 == 0)
  {
   printf("\nDivision is not possible when divisor is zero please put nonzero value\n");
  }
  else
  {
    printf("\nThe divison of the two numbers is %.2f\n",num1/num2);
  }


}

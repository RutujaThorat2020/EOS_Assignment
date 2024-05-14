#include<stdio.h>
//Write a program to accept number and check whether the number is +ve, -ve and zero.
void main()
{
  int num = 0;
  printf("Enter the number to check weather it is positive ,negative and and zero\n");
  scanf("%d",&num);
  if(num == 0)
  printf("The Entered number is zero\n");
  else if(num>0)
  printf("The Entered number is positive\n");
  else if(num<0)
  printf("The Entered number is negative\n");
  
}

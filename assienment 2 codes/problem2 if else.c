#include<stdio.h>
//Determine weather entered number is odd or even
void main()
{
  int num = 0;
  printf("Enter the number you want to determine wheather it is odd and even\n");
  scanf("%d",&num);
  if(num%2 == 0)
  printf("Entered number is even number\n");
  else
  printf("The Entered number is odd number\n");

}


//Write a program to accept an integer value and print its table.
#include<stdio.h>
void main()
{
  int num = 0;
  printf("Enter the number of which table you want to print :");
  scanf("%d",&num);
  printf("\r\n");
  for(int i = 1;i<=10;i++)
     printf("%dX%d=%d\n",num,i,num*i);
}

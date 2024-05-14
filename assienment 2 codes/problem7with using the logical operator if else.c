#include<stdio.h>

//find the leap year
void main()
{
  int num = 0;
  printf("Enter the year you want to check wheather it is leap year or not\n");
  scanf("%d",&num);
  if((num%4 == 0 && num%100 != 0)||(num%100 == 0 && num%400 == 0))
  printf("The given year is the leap year\n");
  else
  printf("The given year is not the leap year\n");
}

#include<stdio.h>
void main()
{
  int num = 0;
  printf("Enter the year you want to check wheather it is the leap year or not\n");
  scanf("%d",&num);
 ((num%4 == 0 && num%100 != 0)||(num%100 == 0 && num%400 == 0))?(printf("The year is the leap year\n")):(printf("The year is not the leap year\n"));
}

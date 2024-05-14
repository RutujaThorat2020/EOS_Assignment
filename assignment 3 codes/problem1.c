//write program to accept a number ,and print 
#include<stdio.h>
void main()
{
  char ch ='\0';
  int num = 0,i=0;
  printf("Enter the character\n");
  scanf("%c",&ch);
  printf("Enter how many times you want it to get printed");
  scanf("%d",&num);
  while(i<num)
  {
   printf("%c ",ch);
   i++;
  }
  printf("\n");
}

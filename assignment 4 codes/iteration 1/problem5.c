#include<stdio.h>
void print_character(char ch,int count);
void print_character(char ch,int count)
{
   int i = 1;
   for(;i<=count;i++)
   printf("%c ",ch);
   printf("\n");
}
void main()
{
  int count = 0;
  char ch = 0;
  printf("Enter the character you want to print with the count\n");
  scanf("%c %d",&ch,&count);
  print_character(ch,count);
}

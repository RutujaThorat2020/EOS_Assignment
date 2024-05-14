
/*
A
B C
D E F
G H I J
*/
#include<stdio.h>
void main()
{
  char ch = 'A';
  for(int i = 0;i<4;i++)
  {
    for(int j = 0;j<=i;j++)
    {
      printf("%c ",ch++);
    }
    printf("\n");
  }
}

/*
A B C D
B C D
C D
D
*/

#include<stdio.h>
void main()
{
  char ch = 'A';
  for(int i = 0;i<4;i++)
  {
    ch = 'A';
    ch = ch+i;
    for(int j = 0;j<4-i;j++)
    {
      printf("%c ",ch++);

    }
    printf("\n");
  }
}

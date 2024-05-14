/*
*
* *
* * *
* * * *
* * * * *
*/

#include<stdio.h>
void main()
{
  int i = 0;
  int j = 0;
  while(i<6)
  {
    j= 0;
    while(j<i)
    {
      printf("* ");
      j++;
    }
    printf("\n");
    i++;
  }
}

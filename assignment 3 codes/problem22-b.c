/*

* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
void main()
{
  int i = 0;
  int j = 0;
  i = 0;
  while(i<6)
  {
    j = 1;
    while(6-i>j)
    {
     printf("* ");
     j++;
    }
    printf("\n");
    i++;
  }
}

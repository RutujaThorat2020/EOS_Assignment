/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/
#include<stdio.h>
void main()
{
  int i = 1;
  int j = 0;
  while(i<=5)
  {
    j = 1 ;
    while(j<=i)
    {
      printf(" %d",j);
      j++;
    }
    printf("\n");
    i++;
  }
}

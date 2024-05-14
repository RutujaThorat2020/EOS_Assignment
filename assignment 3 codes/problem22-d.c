/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include<stdio.h>
void main()
{
  int i = 1;
  int j = 1;
  int k = 0;
   while(i<6)
   {
     k = 5;
     j = 1;
     while(j<=i)
     {
       printf("%d ",k--);
       j++;
     }
     printf("\n");
     i++;
   }
}

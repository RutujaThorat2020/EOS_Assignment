#include<stdio.h>
/*
Write a program to print following pattern.
a. Using multiple printf statements
b. Using single printf statement
*
**
***
****
*****
*/
void main()
{
  int row = 0;
  //printing using the single printf statement
  printf("Enter how many rows you want to print\n");
  scanf("%d",&row);
  for(int i = 0;i<row;i++)
  {
    for(int j =0;j<=i;j++)
    {
    printf("*");
    }

    printf("\r\n");
  }
 printf("printing the given pattern using the multiple printf statements\n"); 
//As per the question I have printed the four row 
  printf("%c",'*');
    printf("\r\n");
  printf("%s","**");
    printf("\r\n");
  printf("%s","***");
    printf("\r\n");
  printf("%s","****");
    printf("\r\n");
  printf("%s","*****");
    printf("\r\n");
}

#include<stdio.h>
void main()
{
  int num  = 0,i=1;
  printf("Enter the number whoose table you want print\n");
  scanf("%d",&num);
  while(i<=10)
  {
    printf("%dX%d=%d\n",num,i,num*i);
    i++;
  }
}

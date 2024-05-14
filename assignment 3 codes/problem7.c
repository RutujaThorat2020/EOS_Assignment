#include<stdio.h>
void main()
{
  int num = 1;
  int i = 1;
  printf("Enter the number whoes pairs you want to print\n");
  scanf("%d",&num);
  while(i<num)
  {
    if(num%i == 0)
    printf(" %d X %d = %d\n",num/i,i,(num/i)*i);
    i++;
  }
}

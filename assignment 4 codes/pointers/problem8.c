#include<stdio.h>
void swap(int *a,int *b);
void swap(int *a,int *b)
{
  int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int num1 = 0,num2 = 0;
  printf("Enter the two number to perform the swap\n");
  printf("Number 1 : ");
  scanf("%d",&num1);
  printf("Number 2 : ");
  scanf("%d",&num2);
  swap(&num1,&num2);
  printf("Numbers after the swap are\nNumber 1 : %d\nNumber 2 : %d\n",num1,num2);
  return 0;
}

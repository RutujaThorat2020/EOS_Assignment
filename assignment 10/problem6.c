#include<stdio.h>
void swap( unsigned short num1,unsigned short num2);
void swap(unsigned short num1,unsigned short num2)
{
  num1 = num1 ^ num2;
  num2 = num1 ^ num2;
  num1 = num1 ^ num2;
  printf("swaped number a = %hu and b = %hu\n",num1,num2);
}

int main()
{
  unsigned short num1 = 0,num2 = 0;
  printf("Enter the numbers you want to swap\n");
  printf(" a = ");
  scanf("%hu",&num1);
  printf(" b = ");
  scanf("%hu",&num2);
  swap(num1,num2);
  return 0;
}

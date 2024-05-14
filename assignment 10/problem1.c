#include<stdio.h>
unsigned int count_bits(unsigned number)
{
  unsigned int count = 0;
  while(number)
  {
    count += number&1;//Anding with the 1 so that in result we 0 or 1 we are checking here the 1 bit
    number >>= 1;//actually dividing number by 2,by shifting it right by 1
  }
  return count;
}
int main()
{
  int bit_mask = 0x01;
  int number = 0;
  int number_of_1s = 0;
  unsigned int count = 0;
  printf("Enter the number\n");
  scanf("%d",&number);
  count = count_bits(number);
  printf("number of 1's in the given number is %d\n",count);
  return 0;
}

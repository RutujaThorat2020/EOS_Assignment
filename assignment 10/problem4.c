#include<stdio.h>
unsigned int count_bits(unsigned short number)
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
  unsigned short number = 0;
  int number_of_1s = 0;
  unsigned int count = 0;
  printf("Enter the number between 0 to 255\n");
  scanf("%hu",&number);
  count = count_bits(number);
  printf("number of 1's in the given number is %d\n",count);
  if(count%2 == 0)
  {
   printf("number %d has even parity\n",number);
   number |= 0x00;
  }
  else
  {
   printf("number %d has odd parity\n",number);
   number |= 0x80;
   printf("number after adding parity bit %hu\n",number);
  }
  return 0;
}

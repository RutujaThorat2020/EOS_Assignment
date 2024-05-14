#include<stdio.h>
char hex_[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int number_in_hex[16] = {0};
int i = 0;
void hexconversion(int number);

void hexconversion(int number)
{
   int remainder = 0;
  // printf("%d\n",number);
   if(number < 16)
   {

      number_in_hex[i] =  number;
      // printf("%d\n",number) ;

   }
   if(number >= 16)
   {
      remainder = number % 16;
      number_in_hex[i] =  remainder;
      number /= 16;
      i++;
      //printf("%d\n",i);
      // printf("%d\n",remainder) ;
      hexconversion(number);

   }
}

void main()
{
  int number;
  printf("Enter the code that you want to convert in hexadecimal\n");
  scanf("%d",&number);
  hexconversion(number);
   printf(" Hexadecimal conversion of the  number is 0x");
  for(i = 15;i>=0;i--)
  printf("%c",hex_[number_in_hex[i]]);
  printf("\n");
}

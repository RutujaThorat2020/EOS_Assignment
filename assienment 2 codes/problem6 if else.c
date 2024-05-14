#include<stdio.h>
void main()
{
  int num = 0;
  int temp = 0;
  int rev = 0;
  int temp2 = 0;
  printf("Enter the 5 digit number to check wheather it is palindrome or not\n");
  scanf("%d",&num);
  temp2 = num;
  while(num != 0)
  {
    temp = num % 10;
    rev = rev*10 + temp;
    num = num/10;
  }
//  printf("%d",rev);
  if(rev == temp2)
  printf("The Entered number is palindrome\n");
  else
  printf("Entered number is not palindrome\n");
}

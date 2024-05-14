#include<stdio.h>
int check_prime(long number);
int check_prime(long number)
{
  int count = 0;
  if(number == 2||number == 3||number == 5||number == 7)
  return 1;
  for(int i = 2;i<=number/2;i++)
  {
    if((number%i) == 0)
    count++;
    break;
  }
  if(count == 0 && number != 1)
  return 1;
  else 
  return 0;
}

void print_prime(long start,long end)
{
   int count  = 0;
   printf("The prime numbers from %ld to %ld are ",start,end);
   for(long i = start;i<= end;i++)
   {
       if(check_prime(i)==1)
       printf("%ld ",i);
   }
   printf("\n");
}

void main()
{ 
    long num = 0,start = 0,end = 0;
    printf("Enter the number to check weather your given number is prime or not\n");
    scanf("%ld",&num);
    if(check_prime(num) ==  1)
    printf("It is the prime number\n");
    else
    printf("It is not a prime number\n");
    printf("Enter the range starting number and ending number to find the prime numbers between them\n");
    printf("Start : ");
    scanf( "%ld",&start);
    printf("End : ");
    scanf("%ld",&end);
   print_prime(start ,end);
}

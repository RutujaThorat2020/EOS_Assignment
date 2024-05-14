#include<stdio.h>
long calculator(long *a,char*opr,long*b);
long calculator(long *a,char*opr,long*b)
{
  switch(*opr)
  {
    case '+':
            return *a+*b;
    case '-':
            return *a-*b;
    case '/':
            return *a / *b;
    case '*':
            return *a * *b;

  }
}
void main()
{
  long a = 0,b = 0;
  char opr = 0;
  printf("Enter two numbers with operation\n");
  scanf("%ld %c %ld",&a,&opr,&b);
  if(b==0)
  printf("Operation can't be performed because denominator is zero\n");
  else
  printf("The result of the operation is %ld\n",calculator(&a,&opr,&b));
}

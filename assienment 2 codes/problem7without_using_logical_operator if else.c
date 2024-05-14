#include<stdio.h>
void main()
{
   int num = 0;
   printf("Enter the year you want to check wheather it is an leap or not\n");
   scanf("%d",&num);
   if(num%4 == 0)
   {
     if(num%100 != 0)
     printf("The year is the leap year\n");
     else if(num%100 == 0)
          if(num%400 == 0)
           printf("The year is the leap year\n");
          else
          printf("It is not a leap year\n");
   }
   else
   printf("Entered year is not an leap year\n");

}

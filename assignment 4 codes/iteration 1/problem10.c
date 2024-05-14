#include<stdio.h>
int leap_year(int year)
{
  if(year%4 == 0)
  {
     if(year%100 != 0)
     return 1;
     else
     return 0;
     if(year % 400 == 0 && year % 100 == 0)
     return 1;
     else
     return 0;
  }
}

int days(int month,int year)
{
  if(month == 1 || month == 3 || month == 5 || month  == 7 ||month ==  8 || month == 10 || month == 12)
  printf("31 days\n");
  else if(month == 4 ||month == 6||month == 9||month == 11)
  printf("30 days\n");
  else if(month == 2)
  {
    if(leap_year(year) == 1)
    printf("29 days\n");
    else
    printf("28 days\n");
  }
}
void main()
{
   int year = 0,month = 0;
   printf("Enter month whose days you want to find and year that you want to check weather it is leap or not\n");
   printf("Year : ");
   scanf("%d",&year);
   printf("Month : ");
   scanf("%d",&month);
  if(leap_year(year) == 1)
  printf("The year %d is leap year\n",year);
  else
  printf("This year is not the leap year\n");
   days(month,year);
}

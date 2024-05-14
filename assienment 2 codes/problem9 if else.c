#include<stdio.h>
void main()
{
   
   int year = 0,month = 0,flag = 0;
   printf("Enter the year and number of the  month whose days you want to find\n");
    printf("Year : ");
    scanf("%d",&year);
    printf("Month : ");
    scanf("%d",&month);
        if((year%4 == 0 && year%100 !=0)||(year%100 == 0 && year%400 == 0))
        {
          printf("The year has 366 days\n");
          flag  = 1;
        }
        else
        {
         printf("The year has 365 days\n"); 
        }
    if(month == 1)
    printf("In the January there are 31 days\n");
    else if(month == 2)
    {
     if(flag == 1)
     printf("In the February there are  29 days due to your Entered year is the leap year\n");
     else
     printf("in the february there are 28 days\n");
     flag = 0;
    } 
    else if(month == 3)
    printf("In the March there are 31 days\n");
    else if(month == 4)
    printf("In the April there are 30 days\n");
    else if(month == 5)
    printf("In the May there are 31 days\n");
    else if(month == 6)
    printf("In the June there are 30 days\n");
    else if(month == 7)
    printf("In the July there are 31 days\n");
    else if(month == 8)
    printf("In the August there are 31 days\n");
    else if(month == 9)
    printf("In the September there are 30 days\n");
    else if(month == 10)
    printf("In the Octomber there are 31 days\n");
    else if(month == 11)
    printf("In the November there are 30 days\n");
    else if(month == 12)
    printf("In the December there are 31 days\n");
}

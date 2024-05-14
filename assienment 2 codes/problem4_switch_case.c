#include<stdio.h>

void main()
{
   int date = 0,month = 0,year = 0;
   int year_code = 0,month_code=0,day_code=0;
   int temp_data0 = 0,temp_data1 = 0,temp_data2 = 0;
   printf("Enter the date with year whose day you want to find\n");
   printf("Date  : ");
   scanf("%d",&date);
   printf("\r\n");
   printf("Month : ");
   scanf("%d",&month);
   printf("\r\n");
   printf("Year  : ");
   scanf("%d",&year); 
   printf("\r\n");
   if(year>=1600 && year<=1699) 
   year_code = 6;
   else if(year>=1700 && year<=1799)  
   year_code = 4;
   else if(year>=1800 && year<=1899) 
   year_code = 2;
   else if(year>=1900 && year<=1999) 
   year_code = 0;
   else if(year>=2000 && year<=2099) 
   year_code = 6;
switch(month)
{
   case 1:
        month_code = 0;
        break;
   case 2:
        month_code = 3;
        break;
   case 3:
        month_code = 3;
        break;
   case 4:
        month_code = 6;
        break;
   case 5:
        month_code = 1;
        break;
   case 6:
        month_code = 4;
        break;
   case 7:
        month_code = 6;
        break;
   case 8:
        month_code = 2;
        break;
   case 9:
        month_code = 5;
        break;
  case 10:
        month_code = 0;
        break;
  case 11:
        month_code = 3;
        break;
  case 12:
        month_code = 5;
        break;
  default:
        printf("Inalid month code\n");
        break;   
} 
/*  
   if(month == 1 || month == 10)
   month_code = 0;
   else if(month == 2)
   month_code = 3;
   else if(month == 3)
   month_code = 3;
   else if(month == 4)
   month_code = 6;
   else if(month == 5)
   month_code = 1;
   else if(month == 6)
   month_code = 4;
   else if(month == 7)
   month_code = 6;   
   else if(month == 8)
   month_code = 2;
   else if(month == 9)
   month_code = 5;
   else if(month == 11)
   month_code = 3;
   else if(month == 12)
   month_code =5;
*/

   temp_data0 = year%100;
//   printf("%d",temp_data0);
   temp_data1 = temp_data0/4;
   temp_data2 = temp_data0+temp_data1+date+month_code+year_code;
   day_code = temp_data2%7;
/*
   if(day_code == 0 || day_code == 7)
   printf("Day is the Sunday\n");
   else if(day_code == 1)
   printf("Day is the Monday\n");
   else if(day_code == 2)
   printf("Day is the Tuesday\n");
   else if(day_code == 3)
   printf("Day is the Wednesday\n");
   else if(day_code == 4)
   printf("Day is the Thursday\n");
   else if(day_code == 5)
   printf("Day is the Friday\n");
   else if(day_code == 6)
   printf("Day is the Saturday\n");
*/   
   switch(day_code)
   {
       case 0:
             printf("Day is the Sunday\n");
             break;
       case 1:
             printf("Day is the Monday\n");
             break;
       case 2:
             printf("Day is the Tuesday\n");
             break;
       case 3:
             printf("Day is the Wednesday\n");
             break;
       case 4:
             printf("Day is the Thursday\n");
             break;
       case 5:
             printf("Day is the Friday\n");
             break;
       case 6:
             printf("Day is the Saturday\n");
             break;
       case 7:
             printf("Day is the Sunday\n");
             break;
  }
   
}

#include<stdio.h>
void main()
{
  float temp_in_celcius = 0,temp_in_farenhite = 0;
  printf("Enter the tempreature you want to convert from the celcius to farenhite\n");
  scanf("%f",&temp_in_celcius);
  printf("The tempreature in the farenhite is %f\n",((9*temp_in_celcius)/5)+32);
  printf("Enter the tempreature you want to convert from the farenhite to celcius\n");
  scanf("%f",&temp_in_farenhite);
  printf("The tempreature in the farenhite is %f\n",(5/9)*(temp_in_farenhite-32));
  
}

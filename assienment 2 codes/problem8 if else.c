#include<stdio.h>
void main()
{
  int num = 0;
  float sell_price = 0;
  printf("Enter the quantity ");
  scanf("%d",&num);
  if(num>0 && num<30)
  {
    printf("You will not get discount beacause your quantity is below 30 so your selling prince is %.2f Rs\n",(float)num*5);
  }
  if(num>=30&&num<50)
  {
   sell_price = ( num*5)-((num*5)*0.10);
   printf("The selling price of %d quantities is as per 10%% discount is %.2f Rs\n",num,sell_price);
  }
  if(num>=50)
  {    
   sell_price = ( num*5)-((num*5)*0.15);   
   printf("The selling price of %d quantities is as per 15%% discount is %.2f Rs\n",num,sell_price);
  }

}

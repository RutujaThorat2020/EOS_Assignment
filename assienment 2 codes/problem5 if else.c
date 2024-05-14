#include<stdio.h>
 
 void main()
 {
  int num1 =0,num2 = 0,num3 = 0,max = 0;
  printf("Enter the three numbers for to find the maximum of them\n");
  printf("\nNum1 : ");
  scanf("%d",&num1);
  printf("\nNum2 : ");
  scanf("%d",&num2);
  printf("\nNum3 : ");
  scanf("%d",&num3);
   max = (num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
   printf("The maximum number out of three is %d\n",max);

   printf("The answer using the if-else\n");
   if(num1>num2)
   {
      if(num1>num3)
       printf("The greater number is %d\n",num1);
      else
       printf("The greater number is %d\n",num3);
   }
   else
   {
       if(num2>num3)
       printf("The greater number is %d\n",num2);
       else
       printf("The greater number is %d\n",num3);
   }
 }

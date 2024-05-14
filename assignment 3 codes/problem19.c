#include<stdio.h>
void main()
{
  int num1 = 0,num2 = 0;
  printf("Enter the range from where to where you want the tables\n");
  printf("Start :");
  scanf("%d",&num1);
  printf("End : ");
  scanf("%d",&num2);
   printf("\n");
    for(int j = 1;j<=10;j++)
    {
      for(int i= num1;i<=num2;i++)
      {
    
        printf("%3d |",i*j);
      }
      printf("\n");
    }
  
}

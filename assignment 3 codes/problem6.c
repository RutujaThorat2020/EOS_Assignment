#include<stdio.h>
//write program to find all factor of the number
int main()
{
   int n = 1;
   int i = 1;
   printf("Enter the number :");
   scanf("%d",&n);
   printf("\nThe factors of the number are following\n");
   while(i<=n)
   {
     if(n%i == 0)
     printf("%d\n",i);
     i++;
   }
   return 0;
}

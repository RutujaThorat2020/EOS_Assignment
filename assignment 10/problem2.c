#include<stdio.h>

void binary_conversion(void*ptr1,int bytes);
void binary_conversion(void*ptr1,int bytes)
{
   char*ptr2 = (char*)ptr1;
   for(int i = 0; i<bytes;i++)
   {
     for(int j = 0;j<=7;j++)
     {
    //    printf("%x\n",*(ptr2+i));
        if(*(ptr2+i)&(0x80 >> j))
        printf("1");
        else
        printf("0");
        
     }
     printf(" ");
   }
   printf("\n");
}
void main()
{
  long var =  0;
  printf("Enter the number you want to convert\n");
  scanf("%ld",&var);
  binary_conversion(&var,sizeof(var));
}

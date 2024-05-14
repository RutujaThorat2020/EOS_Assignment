#include<stdio.h>
#include<stdlib.h>
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
int main(int argc,char*argv[])
{
  long var =  0;
  var = atoi(argv[1]);//I have used atoi function over here to covert the ascii value into the integer value it is present in the stdlib file
  binary_conversion(&var,sizeof(var));
  return 0;
}

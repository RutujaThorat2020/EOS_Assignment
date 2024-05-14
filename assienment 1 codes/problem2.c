#include<stdio.h>
void main()
{
   int a = 0;
   int temp = 0;
   int temp2 = 0;
   char str[32] = {" "};
   printf("Enter the decimal number you want to convert in the octal and hexadecimal format\n");
   scanf("%d",&a);
   printf("The above number in the octal format is 0%o\n",a);
   printf("The above number in the hexadecimal format is 0x%x\n",a);
   if(a<10)
   {
      printf("The above number is the character format is %c\n",a+48);//Adding with the Ascii value of the zero
   }
   else if(a>=10&&a<100)
   {
      temp = a;
      temp = temp/10;
      printf("The above number in the character format is %c",temp+48);
      temp = a%10;
      printf("%c\n",temp+48);
   }
   else if(a>=100&&a<=999)
   {
      temp = a/100;
      printf("%d",temp);
      printf("The abobe number in the character format is %c",temp+48);
      temp = a%100;
      temp2= temp/10;
      printf("%c",temp2+48);
      temp = temp%10;
      printf("%c\n",temp+48);
   }
   else if(a>=1000)
   {
      printf("Since Enter number is beyond three digit so i am using sprintf()\n");
      sprintf(str,"%d",a);
      printf("The entered number in characters is %s\n",str);
   }
}


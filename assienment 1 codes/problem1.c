/*
1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.
*/

#include<stdio.h>

void main()
{
   int a = 0,b= 0;
   int choice = 0;

  //  unsigned char  a = 0,b= 0;
   // char  a = 0,b= 0;
   // unsigned int a = 0,b= 0;
   // long  int a = 0,b= 0;

   printf("Enter the two numbers on which you want to perform the operations\n");
   printf("number1: ");
   scanf("%d",&a);
  // scanf("%ld",&a);
  // scanf("%u",&a);
  // scanf("%c",&a);
   printf("\r\n");
   printf("number2: ");
   scanf("%d",&b);
  // scanf("%ld",&b);
  // scanf("%c",&b);
  // scanf("%u",&b);
   printf("\r\n");
   printf("Enter the squence number of the operation you want to perform on the given numbers menu is following\n1.Addition\n2.Subtraction\n3.Multiplication\n");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
          
         printf("The addition of the given two numbers is %d\n",a+b);
         // printf("The addition of the given two numbers is %c\n",a+b);
         // printf("The addition of the given two numbers is %ld\n",a+b);
        // printf("The addition of the given two numbers is %u\n",a+b);
          break;
     case 2:
          printf("The subtraction of the given two numbers is %d\n",a-b);
         // printf("The subtraction of the given two numbers is %c\n",a-b);
         // printf("The subtraction of the given two numbers is %ld\n",a-b);
         // printf("The subtraction of the given two numbers is %u\n",a-b);
          break;
     case 3:
          printf("The multiplication of the given two numbers is %d\n",a*b);
         // printf("The multiplication of the given two numbers is %c\n",a*b);
         // printf("The multiplication of the given two numbers is %ld\n",a*b);
         // printf("The multiplication of the given two numbers is %u\n",a*b);
          break;
     default:
         printf("Enter the valid operation please\n");
   }
}

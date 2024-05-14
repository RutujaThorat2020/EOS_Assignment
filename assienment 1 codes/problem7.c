/*
Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9
3
6
1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639
*/

#include<stdio.h>
void main()
{
  int num = 0;
  int choice = 0;
  int digit1=0,digit2=0,digit3=0,digit4=0;
  printf("Enter the 4 digit number you want to enter\n");
  scanf("%d",&num);
  printf("\r\n");
  printf("Enter what you want from the following menu\n1.Display the face value of all digits in the number\n2.Display the place value of the each digit form the number\n3.Display the addiion of the of all digits\n");
  scanf("%d",&choice);
  printf("\r\n");
  switch(choice)
  {
     case 1:
          printf("face value of the digit 1 is %d\n",num/1000);
          num %= 1000;
          printf("face value of the digit 2 is %d\n",num/100);
          num %= 100;
          printf("face value of the digit 3 is %d\n",num/10);
          num %= 10;
          printf("face value of the digit 4 is %d\n",num);
          break;
    case 2:    
          printf("Place value of the digit 1 is %d\n",(num/1000)*1000);
          num %= 1000;
          printf("Place  value of the digit 2 is %d\n",(num/100)*100);
          num %= 100;
          printf("place value of the digit 3 is %d\n",(num/10)*10);
          num %= 10;
          printf("place value of the digit 4 is %d\n",num);
          break;
    case 3:
          digit4 = num/1000;
          num %= 1000;
          digit3 =num/100;
          num %= 100;
          digit2 = num/10;
          num %= 10;
          digit1 = num;
          num = digit1*1000+digit2*100+digit3*10+digit4;
          printf("The given number in the reverse order is %d\n",num);
          break;
  }
}

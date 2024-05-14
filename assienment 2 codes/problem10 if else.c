#include<stdio.h>
void main()
{
  char ch = '\0';
  printf("Enter the character please\n");
  scanf("%c",&ch);
  if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
  {
     printf("The Enter character is Alphabet and ");
     if(ch>=65&&ch<=90)
     {
      printf("Uppercase\n");
     }
     if(ch>=97&&ch<=122)
     {
      printf("Lowercase\n");
     }
  }   
  if(ch>=48&&ch<=57)
  {
    printf("The Enter character is digit\n");
  }
  if(ch == 32||ch == 9||ch == 13||ch == 10)
  {
    printf("Enter character are escape sequece character\n");
  }
}



#include<stdio.h>
void main()
{
  char ch = 0;
  //Creating and opening the file
  FILE*fp = fopen("file.txt","r");
  while((ch = fgetc(fp)) != EOF)
  printf("%c",ch);
}

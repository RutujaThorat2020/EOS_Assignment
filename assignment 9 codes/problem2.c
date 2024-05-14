#include<stdio.h>
void main()
{
  char ch = 0;
  //Creating and opening the file
  FILE*ifp = fopen("file.txt","r");
  FILE*ofp = fopen("file1.txt","w");

  
  while((ch = fgetc(ifp)) != EOF)
  fputc(ch,ofp); 
  fclose(ifp);
  fclose(ofp);
}

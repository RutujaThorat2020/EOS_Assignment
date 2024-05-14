#include<stdio.h>
void file_copy(FILE*ifp,FILE*ofp)
{
  char ch = 0;
  while((ch = fgetc(ifp)) != EOF)
  fputc(ch,ofp); 
  fclose(ifp);
  fclose(ofp);
}
void main()
{
  //Creating and opening the file
  FILE*ifp = fopen("file.txt","r");
  FILE*ofp = fopen("file1.txt","w");
  file_copy(ifp,ofp);
}

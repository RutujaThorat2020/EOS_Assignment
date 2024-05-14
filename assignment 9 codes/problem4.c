#include<stdio.h>
void file_copy(char*filename1,char*filename2)
{
  char ch = 0;
  FILE*ifp = fopen(filename1,"r");
  FILE*ofp = fopen(filename2,"w");
  while((ch = fgetc(ifp)) != EOF)
  fputc(ch,ofp);  
  fclose(ifp);
  fclose(ofp);
}
int main(int argc,char*argv[])
{
  //Creating and opening the file
  file_copy(argv[1],argv[2]);
  return 0;
}

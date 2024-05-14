#include<stdio.h> 

/*Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.
*/
void main()
{
  int a = 0;
  printf("Enter the ascii value of the character you want to print in the decimal,octal and in the character format\n");
  scanf("%d",&a);
  printf("The entered value\nIn the decimal format is %d\nIn octal format is 0%o\nIn the hexamdecimal format is 0x%x\nIn the the character format is %c\n",a,a,a,a);

}

#include<stdio.h>
void main()
{
  float x = 0, y = 0;
  printf("Enter the coordinate to determine there quandrant\n");
  printf("x cordinate : ");
  scanf("%f",&x);
  printf("\ny cordinate : ");
  scanf("%f",&y);
  if((x>0)&&(y>0))
  printf("It is in the first quadrant\n");
  else if((x<0)&&(y>0))
  printf("It is in the second quadrant\n");
  else if((x<0)&&(y<0))
  printf("It is in third quadrant\n");
  else if((x>0)&&(y<0))
  printf("It is in forth quadrant\n");
  else if((x == 0)&&(y==0))
  printf("It is at origin\n");
}

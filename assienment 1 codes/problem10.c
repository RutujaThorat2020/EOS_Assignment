#include<math.h>
#include<stdio.h>
void main()
{
  unsigned int a  = 0,b =0,c = 0,s=0;
  double A = 0;
  printf("Enter the length of  three sides of the triangle\n");
  printf("\nside 1 :" );
  scanf("%d",&a);
  printf("\nside 2 :" );
  scanf("%d",&b);
  printf("\nside 3 :" );
  scanf("%d",&c);
  s = a+b+a*c+b+c;
  A = s*(s-a)*(s-a)*(s-c);
  printf("The perimeter of the triangle is %u meters\n",s);
  printf("The Area of the triangle is %lf square meters\n",sqrt(A));
}

#include<stdio.h>

double power(float voltage,float current);
double power(float voltage,float current)
{
  return voltage*current;
}
void main()
{
  double voltage = 0,current = 0;
  printf("Enter the voltage and current to calculate the power\n");
  printf("voltage : ");
  scanf("%lf",&voltage);
  printf("Current : ");
  scanf("%lf",&current);
  printf("The power is %.3lf watts\n",power(voltage,current));
}

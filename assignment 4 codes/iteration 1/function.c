#include"problem.h"
double calculator(double a,char opr,double b)
{
 double c = 0;
  switch(opr)
  {
    case '+':
          return a+b;
    case '-':
          return a-b;
    case '/':
          if(b == 0)
          return -1;
          else
          return a/b;
    case '*':
          return a*b;
    case '%':
             if(b == 0)
             return -1;
             else
             return fmod(a,b);
           
  }
}

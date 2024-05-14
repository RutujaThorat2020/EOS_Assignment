#include<stdio.h>
void main()
{
  int num = 0;
  printf("Enter the month number to find its days\n");
  scanf("%d",&num);
  switch(num)
  {
    case 1:
          printf("In january there are 31 days\n");break;
    case 2:
          printf("In February there are 28 days only in leap year there are 29 days\n");break;
    case 3:
          printf("In March there are 31 days\n");break;
    case 4:
          printf("In April there are 30 days\n");break;
    case 5:
          printf("In May there are 31 days\n");break;
    case 6:
          printf("In june there are 30 days\n");break;
    case 7:
          printf("In July there are 31 days\n");break;
    case 8:
          printf("In August there are 31 days\n");break;
    case 9:
          printf("In September there are 30 days\n");break;
    case 10:
          printf("In Octomber there are 31 days\n");break;
    case 11:
          printf("In November there are 30 days\n");break;
    case 12:
          printf("In December there are 31 days\n");break;
    default:
         printf("Please Enter the valid Input\n");break;
    
  }
}

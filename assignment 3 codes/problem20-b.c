#include<stdio.h>
#include<math.h>
int main()
{
    int num = 1,count = 0;
    int temp = 0,mod = 0,sum = 0;
    char c = 0;
    int num1  = 0;
    while(num<=500)
    {
        temp = num;
        while(temp != 0)
        {
            temp /= 10;
            count++;
        }
      //  printf("count = %d\n",count);
        temp = num;
        while( temp != 0)
        {
            mod = temp % 10;
            sum =sum +(int)pow((double)mod,(double)count);
            temp = temp /10;
        }
        if(sum == num)
        { printf("%d\n",num);}
            sum = 0;
            count = 0;
            num++;
        
    }
}

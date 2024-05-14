#include<stdio.h>
unsigned int check_function(unsigned char c)
{
    if((c>=65 && c<=90) ||(c>=97 && c<=122) )
    { 
        c ^= 32;
        return c;
    }
    else
        return 0;
}
int main()
{
    unsigned char c = 0;
    printf("Enter the character you want to check\n");
    scanf("%c",&c);
    if(check_function(c) == 0)
        printf("It is not and alphabet\n");
    else
    {
        printf("it is alphabet character %c\n",c);
        printf("Result of xor operation with 32 is %c\n",check_function(c));
    }
}

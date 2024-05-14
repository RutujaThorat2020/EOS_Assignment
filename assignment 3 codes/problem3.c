#include<stdio.h>
#include<math.h>
int main()
{
    int temp = 0;
    int temp1= 0;
    int num = 0;
    int choice = 0;
    int rev = 0;
    double add = 0;
    int sum = 0;
    int count = 0;
    char c = 'y';
    long int mul = 0;
    while(c != 'n'&& c == 'y')
    {
        printf("Select the number of the following operation\n1.Sum of all digits\n2.Reverse of the number\n3.checking the number is palindrome or not\n4.checking the number is armstrong or not\n");
        printf("Please Enter the choice\n");
        scanf("%d",&choice);
        printf("Please Enter the number\n");
        scanf("%d",&num);
        switch(choice)
        {
            case 1:
                printf("The sum of all digit operation\n");
                temp = num;
                while(num != 0)
                {
                    temp = num%10;
                    sum += temp;
                    num /= 10;
                }
                printf("The sum of the all digits are %d\n",sum);
                sum = 0;
                temp = 0;
                break;
            case 2:
                printf("The reverse of the number\n");
                temp = num;
                while(num != 0)
                {
                    temp = num%10;
                    rev = rev*10 +temp;
                    num /= 10;
                }
                printf("The reverse of all numbers is %d\n",rev);
                rev = 0;
                temp = 0;
                break;
            case 3:
                printf("Palindrome check operation\n");
                temp1 = num;
                temp = num;
                while(num != 0)
                {
                    temp = num%10;
                    rev = rev*10 + temp;
                    num /= 10;
                }
                if(rev == temp1)
                    printf("The number is palindrome\n");
                else
                    printf("The number is not palindrome\n");
                temp = 0;
                rev =0;
                temp1 = 0;
                break;
            case 4:
                printf("The Armstrong check operation\n");
                temp = num;
                temp1 = num;
                while(num != 0)
                {
                    temp = num%10; 
                    num /= 10;
                    count++;
                }
                num = temp1;
                printf("%d\n",count);

                while(num != 0)
                {
                    temp = num%10;
                    add +=pow((float)temp,(float)count);
                    printf("%f\n",add);
                    num /= 10;
                }
                if(add == temp1)
                    printf("This number is an Armstrong number\n");
                else
                    printf("This number is not an Armstrong number\n");
                add = 0;
                temp1 =0;
                temp = 0;
                count = 0;
                break;
        }

        printf("Do you want to continue y/n\n");
        scanf(" %c",&c);
    }
    return 0;
}

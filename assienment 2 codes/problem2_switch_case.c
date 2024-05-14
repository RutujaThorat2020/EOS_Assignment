#include<stdio.h>
void main()
{
    int choice = 0;
    float a = 0,b = 0;
    char c = 0;
    do
    {
        printf("Enter the number of the operation you want to perform\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n");
        scanf("%d",&choice);
        printf("Enter the numbers\n");
        printf("Number1 : ");
        scanf("%f",&a);
        printf("\nNumber2 : ");
        scanf("%f",&b);
        switch(choice)
        {
            case 1:
                printf("Addition of the two numbers is %.2f\n",a+b);
                break;
            case 2:
                printf("Subtraction of the two numbers is %.2f\n",a-b);
                break;
            case 3:
                printf("Multiplcation of the two numbers is %.2f\n",a*b);
                break;
            case 4:
                if(b != 0)
                    printf("Division of the two numbers is %.2f\n",a/b);
                else if(b == 0)
                    printf("Denominator can't be zero\n");
                break;
            default:
                printf("Enter valid choice\n");
                break;

        }

        printf("Press Y continue and N to exit\n");
        scanf("%*c%c",&c);
    }while(c != 'N');
}

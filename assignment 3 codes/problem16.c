#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num = 0,generated_number = 0;
    char c = '\0';
    int count = 0;
        do
        {

           // printf("Give your number\n");
           // scanf("%d",&num);
            generated_number = rand()%1000+1;
//            printf("Give your number\n");
  //          scanf("%d",&num);
            printf("%d\n",generated_number);
            printf("Give your number\n");
            scanf("%d",&num);
            if(generated_number == num)
              {
                printf("Congrats!You won\n");
                goto here;
               }
            else if(generated_number < num)
            {
                printf("left\n");
                count++;
            }
            else if(generated_number > num)
            {
                printf("right\n");
                count++;
            }
            printf("Your chances remaining are %d\n",10-count);
            if(count == 10)
            {
                count = 0;
                printf("Your 10 guesses done .you lost try again\n");
           here:     printf("Do you want to try again y/n\n");
                scanf(" %c",&c);
            }

        }while( c != 'n');

}

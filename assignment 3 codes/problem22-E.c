/*            G
          E F G F E
      C D E F G F E D C
  A B C D E F G F E D C B A
      C D E F G F E D C
          E F G F E
              G
*/

#include<stdio.h>
void main()
{
    int i = 0,j = 0,p = 7,q = 7,r = 7;
    char ch = 64;
    for(i = 0;i<4;i++)
    {
        for(j = 0;j<=13;j++)
        {
            if(j<p)
                printf("   ");
            else if(j>q)
                printf("   ");
            else if(j<=7)
             printf(" %c ",ch+j);
            else if(j>7)
           printf(" %c ",ch+((13-j)+1));
             
        }
        printf("\n");
        p -= 2;
        q += 2;

    }
    p = 1;
    q = 13;
    for(i=0;i<3;i++)
    {
        p += 2;
        q -= 2;
        for(j=0;j<=13;j++)
        {
          if(j<p)
          printf("   ");
          else if(j>q)
          printf("   ");
          else if(j<=7)
          printf(" %c ",ch+j);
          else if(j>7)
           printf(" %c ",ch+((13-j)+1));
        }
        printf("\n");
    }
}

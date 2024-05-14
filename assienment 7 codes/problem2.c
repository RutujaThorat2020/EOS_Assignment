#include<stdio.h>
#include"functions.h"
#include<stdlib.h>
int main()
{
 int r1 = 0,r2 = 0,c1 =0,c2 =0;
 int **arr1 = NULL,**arr2=NULL,**arr3=NULL;
 printf("Enter the rows and columns of the matrix 1\n");
 printf("Enter the rows of the first matrix\n");
 scanf("%d",&r1);
 printf("Enter the columns of the first matrix\n");
 scanf("%d",&c1);
 arr1 = create_2d_array(arr1,r1,c1);
 arr1 = accept_array(arr1,r1,c1);
 print_array(arr1,r1,c1);
 printf("--------------------------------------------------------\n");
 printf("Enter the rows and columns of the matrix 2\n");
 printf("Enter the rows of the second matrix\n");
 scanf("%d",&r2);
 printf("Enter the columns of the second matrix\n");
 scanf("%d",&c2);
 arr2 = create_2d_array(arr2,r2,c2);
 arr2 = accept_array(arr2,r2,c2);
 print_array(arr2,r2,c2);
 printf("--------------------------------------------------------\n");

 printf("Array Addition Result\n");
 arr3 = addition(arr1,arr2,r1,c1,r2,c2);
 if(arr3 != NULL)
 print_array(arr3,r1,c2);
 else
 {printf("check your rows and columns they are not same addition is not possible\n");}
 printf("--------------------------------------------------------\n");

 printf("Array Subtraction Result\n");
 arr3 = subtraction(arr1,arr2,r1,c1,r2,c2);
 if(arr3 != NULL)
 print_array(arr3,r1,c2);
 else
 {printf("check your rows and columns they are not same addition is not possible\n");}
 printf("--------------------------------------------------------\n");

 printf("Array Multiplication Result\n");
 arr3 = multiplication(arr1,arr2,r1,c1,r2,c2); 
 if(arr3 != NULL)
 print_array(arr3,r1,c2);
 else
 {printf("check your rows and columns they are not same addition is not possible\n");}
 return 0;
}

#include<stdio.h>
#include"functions.h"
#include<stdlib.h>
#if 0
void print_array(int arr[][4],int rows,int columns)
{
  for(int i = 0;i<rows;i++)
  {  
     printf("The elements\n");
     for(int j = 0;j<columns;j++)
     {
       printf("%d\r\n",arr[i][j]);
     }
  }    
}

void accept_array(int arr[][4],int rows,int columns)
{
  for(int i = 0;i<rows;i++)
     for(int j = 0;j<columns;j++)
     {
       printf("Enter the elememt : ");
       scanf("%d",&arr[i][j]);
     }
}
#endif
#if 1
int** create_2d_array(int**Arr,int rows,int columns)
{
    Arr = (int**)calloc(rows,sizeof(int*));
    for(int i = 0;i<rows;i++){
        Arr[i] = (int*)calloc(columns,sizeof(int));
        if(Arr[i] != NULL)
            printf("Memory Allocated\n");
        else
            printf("Memory not allocated\n");
    }
    return Arr;
}

int** multiplication(int**Arr1,int**Arr2,int row1,int column1,int row2,int column2)
{
    int **Arr3 = NULL;
    if(column1 != row2)
    return NULL;
    else
    {
        Arr3 = create_2d_array(Arr3,row1,column2);
        for(int i = 0;i<row1;i++)
        {
            for(int j = 0;j<column2;j++)
            {   Arr3[i][j] = 0;
                for(int k = 0;k<column1;k++){
                Arr3[i][j] += Arr1[i][k]*Arr2[k][j];
//                printf("%d*%d = %d\n",Arr1[i][k],Arr2[k][j],Arr3[i][j]);
              }
            }
        }
        return Arr3;
    }
}

int** subtraction(int**Arr1,int**Arr2,int row1,int column1,int row2,int column2)
{
    int **Arr3 = NULL;
    if((column1 != column2) && (row1 != row2) )
        return NULL;
    else
    { 
       Arr3 = create_2d_array(Arr3,row1,column1);
        for(int i = 0;i<row1;i++)
        {
            for(int j = 0;j<column1;j++)
            {
                Arr3[i][j]=Arr1[i][j]-Arr2[i][j];
            }
        }
        return Arr3;
    }
}

int** addition(int**Arr1,int**Arr2,int row1,int column1,int row2,int column2)
{
   int **Arr3 = NULL;
    if((column1 != column2) && (row1 != row2) )
        return NULL;
    else
    {
       Arr3 = create_2d_array(Arr3,row1,column1);
        for(int i = 0;i<row1;i++)
        {
            for(int j = 0;j<column1;j++)
            {
                Arr3[i][j]=Arr1[i][j]+Arr2[i][j];

            }
        }
        return Arr3;
    }
}


int** accept_array(int**arr,int rows,int columns)
{
  for(int i = 0;i<rows;i++)
     for(int j = 0;j<columns;j++)
     {
       printf("Enter the elememt : ");
       scanf("%d",&arr[i][j]);
     }
     return arr;
}

int** print_array(int**arr,int rows,int columns)
{
  int j = 0;
  printf("The elements of the array are\n");
  for(int i = 0;i<rows;i++)
  {  j=0;
     for(;j<columns;j++)
     {
       printf("%-3d ",arr[i][j]);
     }
     if(j == columns)
     printf("\n");
  }    
     return arr;
}
#endif

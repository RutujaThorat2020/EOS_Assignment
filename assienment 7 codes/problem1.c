/*Write a function to accept a 2-D array from the user. Write another function to print the 2-D
array. Re-use these functions in rest of the assignments wherever required.*/
#include<stdio.h>
#include<stdlib.h> 
#include"functions.h"

int main()
{
  #if 1
  int r = 0,c = 0;
  printf("Enter the rows and column of the two dimentional array\n");
  printf("row : ");
  scanf("%d",&r);
  printf("colomn : ");
  scanf("%d",&c);
  int**arr = (int**)calloc(r,sizeof(int*));
  if(arr !=NULL)
  printf("Memory is allocated\n");
  for(int i = 0;i<r;i++){
  arr[i] = (int*)calloc(c,sizeof(int)); 
  if(arr[i]!=NULL)
  printf("Memory is allocated\n");
  }
  accept_array(arr,r,c);
  print_array(arr,r,c);
  free(arr);
  #endif

  #if 0
  int arr2[3][4];
  accept_array(arr2,3,4);
  print_array(arr2,3,4);
  #endif 

  return 0;
}



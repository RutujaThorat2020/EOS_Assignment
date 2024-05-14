#include<stdio.h>

int main() {
   int ID = 0, Dept_No = 0;
   char Designation = 0;

   printf("Enter your details please\n");
   printf("Employee Id: ");
   scanf("%d", &ID);
   printf("Department No: ");
   scanf("%d", &Dept_No);
   printf("Designation code: ");
   scanf(" %c", &Designation);

   switch (Dept_No) {
   case 10:
      switch (Designation) {
      case 'M':
         printf("Employee with id %d is working in Marketing department as Manager.\n", ID);
         break;
      case 'S':
         printf("Employee with id %d is working in Marketing department as Supervisor.\n", ID);
         break;
      case 's':
         printf("Employee with id %d is working in Marketing department as Security Officer.\n", ID);
         break;
      case 'C':
         printf("Employee with id %d is working in Marketing department as clerk.\n", ID);
         break;
      }
      break;

   case 20:
      switch (Designation) {
      case 'M':
         printf("Employee with id %d is working in Management department as Manager.\n", ID);
         break;
      case 'S':
         printf("Employee with id %d is working in Management department as Supervisor.\n", ID);
         break;
      case 's':
         printf("Employee with id %d is working in Management department as Security Officer.\n", ID);
         break;
      case 'C':
         printf("Employee with id %d is working in Management department as clerk.\n", ID);
         break;
      }
      break;

   case 30:
      switch (Designation) {
      case 'M':
         printf("Employee with id %d is working in Sales department as Manager.\n", ID);
         break;
      case 'S':
         printf("Employee with id %d is working in Sales department as Supervisor.\n", ID);
         break;
      case 's':
         printf("Employee with id %d is working in Sales department as Security Officer.\n", ID);
         break;
      case 'C':
         printf("Employee with id %d is working in Sales department as clerk.\n", ID);
         break;
      }
      break;

   case 40:
      switch (Designation) {
      case 'M':
         printf("Employee with id %d is working in Designing department as Manager.\n", ID);
         break;
      case 'S':
         printf("Employee with id %d is working in Designing department as Supervisor.\n", ID);
         break;
      case 's':
         printf("Employee with id %d is working in Designing department as Security Officer.\n", ID);
         break;
      case 'C':
         printf("Employee with id %d is working in Designing department as clerk.\n", ID);
         break;
      }
      break;

   default:
      printf("Invalid department number\n");
      break;
   }
   
   return 0;
}


 /*
Write a program to determine the ranges of char, short, int, and long variables, both signed and
unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.
(note: the size and range changes from compiler to compiler
)*/

/*
Extend above program (11) to print ranges for float, double, and long double. Use <float.h>.
“float” numbers can be printed using %f, %g, %e, %E.
*/

#include <stdio.h>
#include<limits.h>
#include<float.h>
int main()
{ 
    printf(" Name                  size            range\n");
    printf(" Signed Characters     %u              %d to %d\n",sizeof(char), SCHAR_MIN, SCHAR_MAX);

    printf(" Unsigned Characters   %u              0 to %d\n",sizeof(unsigned char),UCHAR_MAX);

    printf(" Signed Integer        %u              %d to %d\n",sizeof(int),( INT_MIN, INT_MAX));

    printf(" Unsigned Integer      %u              0 to %d\n", sizeof(unsigned int),( INT_MIN, INT_MAX),UINT_MAX);

    printf(" Signed Short Int      %u              %d to %d\n", sizeof(short int),( INT_MIN, INT_MAX),SHRT_MIN, SHRT_MAX);

    printf(" Unsigned Short Int    %u              0 to %d\n", sizeof(unsigned short int),( INT_MIN, INT_MAX),USHRT_MAX);

    printf(" Signed Long           %u              %ld to %ld\n", sizeof(long int),( INT_MIN, INT_MAX),LONG_MIN, LONG_MAX);

    printf(" Unsigned Long         %u              0 to %lu\n", sizeof(unsigned long int),( INT_MIN, INT_MAX),ULONG_MAX);

    printf(" Float                 %u              %e to %e\n", sizeof(float),( INT_MIN, INT_MAX),FLT_MIN, FLT_MAX);

    printf(" Double                %u              %e to %e\n", sizeof(double),( INT_MIN, INT_MAX),DBL_MIN, DBL_MAX);

    printf("The Long Double        %u              %Le to %Le\n",sizeof(long double), LDBL_MIN, LDBL_MAX);
    return 0;
}

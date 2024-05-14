#include<stdio.h>

int power_function(int number, int power);

int power_function(int number, int power) {
    if (power != 0)
        return number * power_function(number,--power);
    else
        return 1;
}

int main() {
    int num = 0, power = 0;
    
    printf("Enter the number whose power you want to find\n");
    scanf("%d", &num);
    
    printf("Enter the power\n");
    scanf("%d", &power);
    
    printf("The power raised to %d of the number %d is %d\n", power, num, power_function(num, power));
    
    return 0;
}


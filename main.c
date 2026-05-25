#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1,num2;
    float add,sub,mul,div;

    printf("Enter number 1: ");
    scanf("%f", &num1);

    printf("Enter number 2: ");
    scanf("%f", &num2);

    add = num1 + num2;
    sub = num2 - num1;
    mul = num1 * num2;
    div = num1/num2;

    printf("Total value of number 1 and number 2 = %.2f", add);


    return 0;
}

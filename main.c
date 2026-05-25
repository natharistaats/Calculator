#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1,num2;
    float add,sub,mul,div;
    char op;

    printf("Enter number 1: ");
    scanf("%f", &num1);

    printf("Enter number 2: ");
    scanf("%f", &num2);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &op);


    add = num1 + num2;
    sub = num2 - num1;
    mul = num1 * num2;
    div = num1/num2;

    if(op == '+'){
        printf("Value is = %.2f", add);
    }
    else if(op == '-'){
        printf("Value is = %.2f", sub);
    }
    else if(op == '*'){
        printf("Value is = %.2f", mul);
    }
    else if(op == '/'){
        printf("Value is = %.2f", div);
    }
    else{
        printf("Invalid input. Please try again");
    }


    return 0;
}

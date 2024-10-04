#include <stdio.h>

int main() {
    float num1, num2;
    char operation;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    printf("Enter the arithmetic operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            printf("The result is: %f\n", num1 + num2);
            break;
        case '-':
            printf("The result is: %f\n", num1 - num2);
            break;
        case '*':
            printf("The result is: %f\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0) {
                printf("The result is: %f\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation. Please enter +, -, *, or /\n");
            break;
    }
    return 0;
}
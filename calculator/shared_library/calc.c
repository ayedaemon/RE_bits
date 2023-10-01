#include <stdio.h>
#include <stdlib.h>
#include "arithmatic.h"

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter equation (a + b): ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}

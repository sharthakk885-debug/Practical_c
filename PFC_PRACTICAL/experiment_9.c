//Program to perform arithmetic operations

#include <stdio.h>
int main() {
    char op;
    float a, b;

    printf("Enter operator (+, -, *, /):\n");
    scanf(" %c", &op);

    printf("Enter two numbers:\n");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}


/*OUTPUT
Enter operator (+, -, *, /):
*
Enter two numbers:
5 4

Result = 20.00


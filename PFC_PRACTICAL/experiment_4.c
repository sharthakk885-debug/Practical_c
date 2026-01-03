//4. Program to find largest of two numbers

#include <stdio.h>
int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Largest number = %d", a);
    } else {
        printf("Largest number = %d", b);
    }

    return 0;
}


/*OUTPUT:
Enter first number: 15
Enter second number: 10
Largest number = 15

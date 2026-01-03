//Program to find sum of N natural numbers
#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter the value of N:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}


/*OUTPUT:
Sum of first 10 natural numbers = 55


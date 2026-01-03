//Program to find maximum of three numbers.
#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Maximum number = %d", a);
    else if (b >= a && b >= c)
        printf("Maximum number = %d", b);
    else
        printf("Maximum number = %d", c);

    return 0;
}

/*OUTPUT
Maximum number = 25


//Program to find sum of elements of 2D array

#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j;
    int sum = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}


/*OUTPUT:
Enter number of rows and columns:
2 3
Enter elements of the 2D array:
1 2 3
4 5 6

Sum of all elements = 21



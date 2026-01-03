//Program for 2D array input/output

#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("2D Array elements are:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*OUTPUT:
Enter number of rows and columns:
2 3
Enter elements of the 2D array:
1 2 3
4 5 6

2D Array elements are:
1 2 3
4 5 6


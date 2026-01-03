//14. Program for 1D array input/output

#include <stdio.h>
int main() {
    int a[50], n, i;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}



/*OUTPUT:
Enter number of elements:
5
Enter 5 elements:
10 20 30 40 50


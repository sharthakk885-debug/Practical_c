//Program for linear search
#include <stdio.h>
int main() {
    int a[50], n, i, key, found = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search:\n");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            found = 1;
            printf("Element found at position %d", i + 1);
            break;
        }
    }

    if (found == 0) {
        printf("Element not found");
    }

    return 0;
}


/*OUTPUT:
Enter number of elements:
5
Enter 5 elements:
10 20 30 40 50
Enter element to search:
30


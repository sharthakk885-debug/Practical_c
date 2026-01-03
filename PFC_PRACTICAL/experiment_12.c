//Program demonstrating break and continue
#include <stdio.h>
int main() {
    int i;

    printf("Using continue:\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3)
            continue;   // skips 3
        printf("%d ", i);
    }
    printf("\n\nUsing break:\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3)
            break;      // stops loop at 3
        printf("%d ", i);
    }

    return 0;
}


/*OUTPUT:
Using continue:
1 2 4 5

Using break:
1 2
*/
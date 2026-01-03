//Program to calculate area of a circle

#include <stdio.h>
int main() {
    float radius, area;
    const float pi = 3.14;

    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area of the circle = %.2f", area);

    return 0;
}


/*OUTPUT
Area of the circle = 153.94

//Program demonstrating data types and format specifiers

#include <stdio.h>
int main() {
    int age = 20;
    float height = 5.8;
    double salary = 45000.75;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Salary: %.2lf\n", salary);
    printf("Grade: %c\n", grade);

    return 0;
}


/*OUTPUT:
Age: 20
Height: 5.8
Salary: 45000.75
Grade: A


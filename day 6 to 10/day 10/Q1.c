#include <stdio.h>

int main() {
    float a, b, c;

    // Prompt user to enter side lengths
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check if it's a valid triangle first
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Now classify the triangle
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if 'a' is zero
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 1;
    }

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Evaluate roots based on discriminant
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(

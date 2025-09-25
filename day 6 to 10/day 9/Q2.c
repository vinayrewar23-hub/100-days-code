#include <stdio.h>

int main() {
    float percentage;

    // Prompt user for input
    printf("Enter your percentage (0-100): ");
    scanf("%f", &percentage);

    // Validate input and determine grade
    if (percentage < 0 || percentage > 100) {
        printf("Error: Please enter a percentage between 0 and 100.\n");
    } else if (percentage >= 90) {
        printf("Your grade is: A\n");
    } else if (percentage >= 80) {
        printf("Your grade is: B\n");
    } else if (percentage >= 70) {
        printf("Your grade is: C\n");
    } else if (percentage >= 60) {
        printf("Your grade is: D\n");
    } else {
        printf("Your grade is: F\n");
    }

    return 0;
}


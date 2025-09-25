#include <stdio.h>
#include <math.h>  // for pow()

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest calculation
    simple_interest = (principal * rate * time) / 100.0;

    // Compound Interest calculation
    compound_interest = principal * pow((1 + rate / 100.0), time) - principal;

    // Display results
    printf("\nSimple Interest = %.2f", simple_interest);
    printf("\nCompound Interest = %.2f\n", compound_interest);

    return 0;
}

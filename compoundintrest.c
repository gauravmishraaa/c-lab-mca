#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, ci;

    /* Input principal, rate, and time from user */
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate (in %): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    /* Calculate compound interest */
    ci = principal * pow((1 + rate/100), time);

    /* Print the result */
    printf("Compound interest: %.2f\n", ci);

    return 0;
}
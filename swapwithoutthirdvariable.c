#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b; // a now holds the sum of a and b
    b = a - b; // b now holds the original value of a
    a = a - b; // a now holds the original value of b

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
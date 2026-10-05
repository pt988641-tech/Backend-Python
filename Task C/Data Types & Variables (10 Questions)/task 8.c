#include <stdio.h>

int main() {
    float a, b, c, d, e, average;

    printf("Enter five numbers: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    average = (a + b + c + d + e) / 5;

    printf("Average = %.2f", average);

    return 0;
}

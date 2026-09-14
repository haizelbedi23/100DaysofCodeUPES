// Q4: Calculate area and circumference of a circle.
#include <stdio.h>
int main() {
    float r;
    float pi = 3.14159;
    scanf("%f", &r);
    printf("Area = %.2f\n", pi * r * r);
    printf("Circumference = %.2f", 2 * pi * r);
    return 0;
}

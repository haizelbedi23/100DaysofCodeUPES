// Q2: Input two numbers and display sum, difference, product and quotient.
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    if (b != 0)
        printf("Quotient = %d", a / b);
    else
        printf("Cannot divide by zero");
    return 0;
}

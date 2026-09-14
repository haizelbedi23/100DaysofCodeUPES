#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

int main() {
    int n, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        digit = n % 10;
        sum = sum + factorial(digit);
        n = n / 10;
    }

    if (sum == original)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
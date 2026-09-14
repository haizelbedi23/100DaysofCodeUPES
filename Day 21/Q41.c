#include <stdio.h>

int main() {
    int n, original, first, last, digits = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    last = n % 10;
    while (n >= 10) {
        n = n / 10;
        digits = digits * 10;
    }
    first = n;

    middle = (original % digits) / 10;
    result = last * digits + middle * 10 + first;

    printf("After swap = %d", result);
    return 0;
}
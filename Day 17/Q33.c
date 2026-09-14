#include <stdio.h>

int main() {
    int n, original, digit, count = 0, sum = 0, i, power;

    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        count++;
        n = n / 10;
    }

    n = original;
    while (n != 0) {
        digit = n % 10;
        power = 1;
        for (i = 1; i <= count; i++) {
            power = power * digit;
        }
        sum = sum + power;
        n = n / 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
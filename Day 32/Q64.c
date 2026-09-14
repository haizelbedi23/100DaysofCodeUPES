#include <stdio.h>
int main() {
    int n, digit, count[10] = {0}, i, maxDigit = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0) count[0] = 1;
    while (n != 0) {
        digit = n % 10;
        if (digit < 0) digit = -digit;
        count[digit]++;
        n = n / 10;
    }
    for (i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) maxDigit = i;
    }
    printf("Most frequent digit = %d", maxDigit);
    return 0;
}
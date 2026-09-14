#include <stdio.h>

int main() {
    int binary[50], n, i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("1");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 10;
        n = n / 10;
        i++;
    }

    printf("1's complement = ");
    for (i = i - 1; i >= 0; i--) {
        if (binary[i] == 0)
            printf("1");
        else
            printf("0");
    }

    return 0;
}
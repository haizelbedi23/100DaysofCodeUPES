#include <stdio.h>

int main() {
    int n, i;
    double sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1)
            sum = sum + 1;
        else
            sum = sum + (double)(2 * i - 1) / (2 * i - 2);
    }

    printf("Sum = %.2f", sum);
    return 0;
}
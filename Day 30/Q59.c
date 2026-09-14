#include <stdio.h>
int main() {
    int arr[100], n, i, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even = %d\n", even);
    printf("Odd = %d", odd);
    return 0;
}
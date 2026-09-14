#include <stdio.h>
int main() {
    int arr[100], n, value, pos, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter value and position: ");
    scanf("%d %d", &value, &pos);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position");
        return 0;
    }
    for (i = n; i >= pos; i--) arr[i] = arr[i - 1];
    arr[pos - 1] = value;
    n++;
    printf("Array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
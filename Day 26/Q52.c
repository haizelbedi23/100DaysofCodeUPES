#include <stdio.h>

int main() {
    int i, j;

    /* Pattern from the question, represented row by row. */
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n\n");
    }

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}
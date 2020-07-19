#include <stdio.h>

int masaasin() {
    int i, j;

    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 5; i >= 1; i--) {
        for (int k = 0; k < 5 - i; k++)
            printf(" ");
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
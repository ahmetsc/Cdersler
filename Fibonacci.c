#include<stdio.h>

int asmsaain(void) {
    int x = 0;
    int y = 1;
    int z;
    int c;
    int d;

    printf("eleman sayısı: ");
    scanf("%d", &c);

    for (d = 1; d <= c; d++) {
        printf("%2d. Eleman: %d\n", d, x);
        z = x + y;
        x = y;
        y = z;
    }

    return 0;
}

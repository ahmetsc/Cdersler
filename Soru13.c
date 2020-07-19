#include <stdio.h>

void ters_sayi (int sayi){
    while (sayi >0) {
        printf("½d", sayi % 10);
        sayi /= 10;
    }
    printf("\n");
}
 
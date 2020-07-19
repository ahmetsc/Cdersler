#include <stdio.h>

int asmadsain(){
    int sayi, asalmi,i;

    printf("sayınızı giriniz: ");
    scanf("%d", &sayi);

    for (int i=2; i <= sayi/2 ; i++) {
        if ( sayi%i == 0)
            printf("Sayınız asal değildir.");
        else
            printf("Sayınız asaldır.");
        break;
    }
    return 0;
}
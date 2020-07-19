#include <stdio.h>

int asdmasadin(){
    int en;
    int girilen;

    for (int i=0; i <3; i++) {
        printf("SAYILARINIZI GİRİNİZ: ");
        scanf("%d",&girilen);
        if (girilen > en)
            en = girilen;
    }
    printf("EN BÜYÜK SAYI: %d",en);

    return 0;
}
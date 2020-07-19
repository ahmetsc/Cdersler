#include <stdio.h>;


int maisssn() {
    for (int i=0; i<3; i++) {
        printf("dış loop: %d\n", i);
        for (int j=0;j<3;j++) {
            printf("iç loop: %d\n", j);
            if (j==2 && i == 2) {
                j++;
                goto cikis;
            }
        }
        printf("kullanıcı hesap tanım: %d\n", i);
    }

    cikis:
    printf("dosya kapandı, byeee\n");
}
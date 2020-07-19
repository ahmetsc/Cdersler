#include <stdio.h>

int sadmasain(void ){
    int x;
    printf("lütfen notunuzu giriniz: ");
    scanf("%d",&x);
    if (x >= 90)
        printf("Notunuz: A");
    else if (x >80 && x <90)
        printf("Notunuz: BA");
    else if (x > 70 && x <80)
        printf("Notunuz: BB");
    else
        printf("Notunuz: F");
    return 0;
}
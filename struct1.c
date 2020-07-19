#include <stdio.h>

typedef  struct {
    int yas;
    char * isim;
    enum {bay, bayan} cinsiyet;
} insan;

int main(){
    int a;
    insan ahmet;
    ahmet.yas;
    printf("Yaşınızı giriniz: ",ahmet);
    scanf("%d",&ahmet.yas);
    printf("Ahmet'in yaşı: %d",ahmet.yas);
}
#include<stdio.h>

int maaassain(void) {
    // Degerleri tutacagimiz 'dizi'
    // adinda bir dizi olusturuyoruz.
    float dizi[10];
    float ortalama, toplam = 0;
    int ortalama_ustu_adedi = 0;
    int ortalama_alti_adedi = 0;
    int i;

    // Kullanici dizinin elemanlarini giriyor:
    for (i = 0; i < 10; i++) {
        printf("%2d. elemanı giriniz> ", (i + 1));
        scanf("%f", &dizi[i]);
        toplam += dizi[i];
    }

    // dizinin ortalamasi hesaplaniyor.
    ortalama = toplam / 10.0;

    // ortalamadan kucuk ve buyuk elemanlarin
    // kac adet oldugu belirleniyor.
    for (i = 0; i < 10; i++) {
        if (dizi[i] < ortalama)
            ortalama_alti_adedi++;
        else if (dizi[i] > ortalama)
            ortalama_ustu_adedi++;
    }

    // raporlama yapiliyor.
    printf("Ortalama: %.2f\n", ortalama);
    printf("Ortalamadan düşük %d eleman vardır.\n", ortalama_alti_adedi);
    printf("Ortalamadan yüksek %d eleman vardır.\n", ortalama_ustu_adedi);

    return 0;
}
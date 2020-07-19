#include<stdio.h>
/* Kendisine verilen iki diziyi birlestirip
   sonuclari ucuncu bir diziye atar */
int *dizileri_birlestir( int [], int,
                         int [], int,
                         int []);
int massaaain( void )
{
    // liste_1, 5 elemanli bir dizidir.
    int liste_1[5] = { 6, 7, 8, 9, 10 };
    // liste_2, 7 elemanli bir dizidir.
    int liste_2[7] = {13, 7, 12, 9, 7, 1, 14 };
    // sonuclarin toplanacagi toplam_sonuc dizisi
    int toplam_sonuc[13];
    // sonucun dondurulmesi icin pointer tanimliyoruz
    int *ptr;
    int i;

    // fonksiyonu calistiriyoruz.
    ptr = dizileri_birlestir( liste_1, 5, liste_2, 7,
                              toplam_sonuc );

    // pointer uzerinden sonuclari yazdiriyoruz.
    for( i = 0; i < 12; i++ )
        printf("%d ", *(ptr+i) );
    printf("\n");

    return 0;
}
int *dizileri_birlestir( int dizi_1[], int boyut_1,
                         int dizi_2[], int boyut_2,
                         int sonuc[] )
{
    int i, k;
    // Birinci dizinin degerleri ataniyor.
    for( i = 0; i < boyut_1; i++ )
        sonuc[i] = dizi_1[i];

    // Ikinci dizinin degerleri ataniyor.
    for( k = 0; k < boyut_2; i++, k++ ) {
        sonuc[i] = dizi_2[k];
    }

    // Geriye sonuc dizisi gonderiliyor.
    return sonuc;
}
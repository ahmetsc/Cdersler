#include<stdio.h>
int masdadin( void )
{
    int girilen_sayi_adedi = 0;
    int sayi_toplami = 0;
    int girilen_sayi;
    //Sonsuz döngü oluşturuyoruz.
    for( ; ; ) {
        printf("Lütfen bir sayı giriniz> ");
        scanf("%d",&girilen_sayi);
        if( girilen_sayi < 0 ) break;
        sayi_toplami += girilen_sayi;
        girilen_sayi_adedi++;
    }
    printf("Toplam %d adet sayı girilmiştir.\n",girilen_sayi_adedi);
    printf("Bunların toplam değeri %d olarak bulunmuştur.\n",sayi_toplami);
    printf("Ortalaması %.3f olarak hesaplanmıştır\n",(float)sayi_toplami/girilen_sayi_adedi);
    return 0;
}
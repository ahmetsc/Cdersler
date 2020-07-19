#include<stdio.h>
int maassain( void )
{
    // Aylari temsil etmesi icin
    // aylar adinda 12 elemanli
    // bir dizi olusturuyoruz.
    int aylar[ 12 ];
    int toplam = 0;
    int i;

    printf("lütfen güneşl ise 1 değilse 0'a basınız...\n");
    // Birinci dongu, deger atamak icindir
    for( i = 0; i < 12; i++ ) {
        printf( "%2d.Ay: ", (i+1) );
        // aylara deger atıyoruz:
        scanf( "%d", &aylar[ i ] );
    }

    // Az evvel girilen degerleri gostermek icin
    // ikinci bir dongu kurduk
    printf( "\nGİRDİĞİNİZ DEĞERLER\n\n" );
    for( i = 0; i < 12; i++ ) {
        printf( "%2d.Ay için %d girdiniz\n", (i+1), aylar[i] );
        toplam += aylar[ i ];
    }

    printf( "Toplam güneşli ay sayısı: %d\n", toplam );
    return 0;
}

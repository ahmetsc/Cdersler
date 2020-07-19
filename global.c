#include<stdio.h>
int sonuc = 0;

// Verilen sayinin karesini hesaplayip,
// global 'sonuc' degiskenine yazar.
void kare_hesaplaa( int sayi )
{
    sonuc = sayi * sayi;
}

int aamaaain( void )
{
    // main( ) fonksiyonunda
    // a degiskeni tanimliyoruz.
    int a;
    printf( "Sayı giriniz> ");
    scanf( "%d",&a );
    printf( "Girdiğiniz sayı\t: %d\n", a );
    kare_hesaplaa( a );
    printf("Sayının karesi\t: %d\n", sonuc );
    return 0;
}

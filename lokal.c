#include<stdio.h>
// Verilen sayinin karesini hesaplar
void kare_hesapla( int sayi )
{
    // kare_hesapla fonksiyonunda
    // a degiskeni tanimliyoruz.
    int a;
    a = sayi * sayi;
    printf( "Sayının karesi\t: %d\n", a );
}

// Verilen sayinin kupunu hesaplar
void kup_hesapla( int sayi )
{
    // kup_hesapla fonksiyonunda
    // a degiskeni tanimliyoruz.
    int a;
    a = sayi * sayi * sayi;
    printf( "Sayının küpü\t: %d\n", a );
}

int maaain( void )
{
    // main( ) fonksiyonunda
    // a degiskeni tanimliyoruz.
    int a;
    printf( "Sayı giriniz> ");
    scanf( "%d",&a );
    printf( "Girdiğiniz sayı\t: %d\n", a );
    kare_hesapla( a );
    // Eger a degiskeni lokal olmasaydi,
    // kare_hesapla fonksiyonundan sonra,
    // a'nin degeri bozulur ve kup yanlis
    // hesaplanirdi.
    kup_hesapla( a );
    return 0;
}
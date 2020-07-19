#include<stdio.h>
#define PI 3.14
int smaain( void )
{
    // Tanımlı PI değeri, tanımsız hâle getiriliyor.
#undef PI

    int yaricap;
    float alan;
    printf( "Çemberin yarı çapını giriniz> " );
    scanf( "%d", &yaricap );

    // PI değerinin tanımlı olup olmadığı kontrol ediliyor.
#ifdef PI
    //PI tanımlıysa, daire alanı hesaplanıyor.
		alan = PI * yaricap * yaricap;
		printf( "Çember alanı: %.2f\n", alan );
#else
    //PI değeri tanımsızsa, HATA mesajı veriliyor.
    printf("HATA: Alan değeri tanımlı değildir.\n");
#endif

    return 0;
}
#include<stdio.h>
/* Kendisine verilen dizinin butun
   elemanlarinin karesini alir */
void karesine_donustur( int [ ], int );
int masssain( void )
{
    int i;
    int liste[ ] = { 1,2,3,4,5,6,7 };
    for( i = 0; i < 7; i++ ) {
        printf( "%d ", liste[ i ] );
    }
    printf("\n");

    // Fonksiyonu cagiriyoruz. Fonksiyon geriye
    // herhangi bir deger dondurmuyor. Diziler
    // referans yontemiyle aktarildigi icin dizinin
    // degeri bu sekilde degismis oluyor.
    karesine_donustur( liste, 7 );
    for( i = 0; i < 7; i++ ) {
        printf( "%d ", liste[ i ] );
    }
    printf("\n");
    return 0;
}
void karesine_donustur( int dizi[ ], int boyut )
{
    int i;
    for( i = 0; i < boyut; i++ ) {
        dizi[ i ] = dizi[ i ] * dizi[ i ];
    }
}

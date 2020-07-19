#include<stdio.h>
int maissn( void )
{
    // dizi'yi tanitirken, ilk deger
    // atiyoruz
    int dizi[ ] = { 15, 54, 1, 44, 55,
                    40, 60, 4, 77, 45 };
    int i, max, min;

    // Dizinin ilk elemanini, en kucuk
    // ve en buyuk deger kabul ediyoruz.
    // Bunun yanlis olmasi onemli degil;
    // sadece bir noktadan kontrole baslamamiz
    // gerektiginden boyle bir secim yaptik.
    min = dizi[ 0 ];
    max = dizi[ 0 ];

    for( i = 1; i < 10; i++ ) {
        // min'in degeri, dizi elemanindan
        // buyukse, min'in degerini degistiririz.
        // Kendisinden daha kucuk sayi oldugunu
        // gosterir.
        if( min > dizi[i] )
            min = dizi[i];

        // max'in degeri, dizi elemanindan
        // kucukse, max'in degerini degistiririz.
        // Kendisinden daha buyuk sayi oldugunu
        // gosterir.
        if( max < dizi[i] )
            max = dizi[i];
    }

    printf( "En Küçük Değer: %d\n", min );
    printf( "En Büyük Değer: %d\n", max );

    return 0;
}


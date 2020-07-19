#include<stdio.h>
int maAAin( void )
{
    // int tipinde değişken
    // tanımlıyoruz:
    int xyz = 10, k;
    // int tipinde pointer
    // tanımlıyoruz:
    int *p;

    // xyz değişkeninin adresini
    // pointer'a atıyoruz.
    // Bir değişken adresini '&'
    // işaretiyle alırız.
    p = &xyz;

    // k değişkenine xyz'nin değeri
    // atanır. Pointer'lar değer tutmaz.
    // değer tutan değişkenleri işaret
    // eder. Başına '*' koyulduğunda,
    // işaret ettiği değişkenin değerini
    // gösterir.
    k = *p;
    printf("%d",k);

    return 0;
}
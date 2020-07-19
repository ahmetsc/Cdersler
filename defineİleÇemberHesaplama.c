#include <stdio.h>
#define PI 3.14
#define degerver  scanf
#define ekranayazdir printf
int assmaasin( void ){
    int yaricap;
    float alan;
    ekranayazdir( "Çemberin yarı çapını giriniz> " );
    degerver( "%d", &yaricap );
    alan = PI * yaricap * yaricap;
    ekranayazdir( "Çember alanı: %.2f\n", alan );
    return 0;
}
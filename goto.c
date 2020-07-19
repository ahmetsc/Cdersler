#include<stdio.h>
int maiddsfn()
{
    int i = 0;
    baslangic_noktasi:
    printf( "Çalısıyor... %d\n",i );
    i++;
    if(i<=3) {
        goto baslangic_noktasi;
    } else if (i < 20){
        goto baslangic_noktasi;
    }

    return 0;
}
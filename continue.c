#include <stdio.h>

int masdain(){
   int x, l, r;
    for( x = 0; x <= 120; x++) {
        if( x%11 == 0 ) {
           printf("\n");
       }
        if (x-l == 11*l) {
            printf(" ol ");
            l++;
        } else {
            if ( x%10  == 0) {
                printf(" or ");
                r++;
            } else {
                printf(" x ");
            }
        }
    }
    return 0;
}

#include <stdio.h>

int asmadsin(){
    int oneEdge,twoEdge,threeEdge;
    int total =0;
    printf("İlk kenarı yazınız "
            "\n(One edge write): ");
    scanf("%d", &oneEdge);
    printf("ikinci kenarı yazınız "
            "\n(Two edge write): ");
    scanf("%d", &twoEdge);
    printf("üçüncü kenarı yazınız "
            "\n(Three edge write:):  ");
    scanf("%d", &threeEdge);

        if (oneEdge < twoEdge){
                    total = oneEdge;
                    oneEdge = twoEdge;
                    twoEdge = total;}
        if (oneEdge + twoEdge < threeEdge || oneEdge - twoEdge > threeEdge)
            printf("Bunla üçgen olmaz...");
        else
            printf("Bunla üçgen olur...");
return 0;
}
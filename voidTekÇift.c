#include <stdio.h>
void s(int number)
{
    if (number%2 == 0)
        printf("%d ,Sayısı Çifttir...",number);
    else
        printf("%d ,Sayısı Tektir...",number);
}
int massin(void )
{
    int sayi;
    printf("Lütfen Sayınızı Giriniz: ");
    scanf("%d",&sayi);
    s(sayi);

    return 0;
}

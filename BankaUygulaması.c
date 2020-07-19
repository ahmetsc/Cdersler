#include <stdio.h>

//int main(){
 //   int a;
 //   int islem;
 //   int tutar;
 //   int bakiye=1000;
 //   printf("[1]PARA YATIR\n[2]PARA ÇEK\n[3]HAVALE YAP\n[4]BAKİYE SORGULA\n[5]İŞLEMİ İPTAL ET");
 //   printf("\nLÜTFEN İŞLEMİNİZİ SEÇMEK İÇİN BURAYA YAZINIZ: ");
 //   scanf("%d",&islem);
 //   switch (islem) {
 //       case 1:
 //           printf("BAKİYENİZ: %d\n",bakiye);
 //           printf("YATIRILACAK TUTAR: ");
 //           scanf("%d",&a);
 //           tutar = a + bakiye;
 //           printf("BAKİYENİZ: %d",tutar);
 //           break;
 //       case 2:
 //           printf("BAKİYENİZ: %d",bakiye);
 //           printf("\nÇEKİLECEK TUTAR:");
 //           scanf("%d",&tutar);
 //           if (tutar > bakiye){
 //               printf("BAKİYE YETERSİZ :(\n");
 //           bakiye -= tutar;
 //           printf("%d LİRA EKSİK",bakiye);}
 //           else
 //               a = bakiye - tutar;
 //           printf("KALAN BAKİYENİZ: %d",a);
 //           break;
 //       case 3:
 //           printf("BAKİYENİZ: %d",bakiye);
 //           printf("\nHAVALE YAPILACAK TUTAR:");
 //           scanf("%d",&tutar);
 //           if (tutar > bakiye){
 //               printf("BAKİYE YETERSİZ :(\n");
 //               bakiye -= tutar;
 //               printf("%d LİRA EKSİK",bakiye);}
 //           else
 //              a = bakiye - tutar;
 //           printf("KALAN BAKİYENİZ: %d",a);
 //           break;
 //       case 4:
 //           printf("BAKİYENİZ: %d",bakiye);
 //           break;
 //       case 5:
 //           printf("ÇIKIŞ YAPILIYOR...");
 //           break;
 //       default:
 //           printf("!!!HATA: YANLIŞ TUŞLADINIZ.");}
 //           return 0;}
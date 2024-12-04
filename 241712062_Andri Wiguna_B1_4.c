#include <stdio.h>

int main () {

    printf("========================\n");
    printf("| Selamat datang       |\n");
    printf("| PERKALIAN 2, 3 Dan 4 | \n");
    printf("========================\n");

int pilihan ;
    printf("Pilih Perkalian yang di inginkan (2,3,4) \n");
    printf("Perkalian Yangg di pilih: ");
    scanf("%d",&pilihan);

    switch (pilihan){
        case 2 :
            printf("Pilihan anda adalah perkalian dua \n");
            // Perkalian 2
            int  count;
            printf("Perkalian 2 : \n");
            for(count = 1; count <= 10; count++){
            printf("%d * 2 = %d \n", count, (2*count));
            }
            break;
        case 3 :
            printf("Pilihan anda adalah perklian tiga \n");
            // Perkalian 3
            printf("perklian 3 \n");
            int b = 1;
            while(b <= 10){
            printf("%d * 3 = %d \n", b,  (3*b));
            b++;}
        break;
        case 4 :
            printf("Pilihan anda adalah perkalian 4 \n");
            // Perkalian 4

            printf("Perkalian 4 : \n");
            int a;
            a = 1;
            do{
            printf("%d * 4 = %d \n", a,  (4*a));
            a++;
            }while(a <= 10);
            break;
        default :
            printf(" Pilihan tidak sesuai silahkan ulangi  \n");
}
    printf("\n");
    printf("Terima Kasih \n");
return 0;
    }

#include <stdio.h>
int penjumlahan (int a, int b){
    return a + b;
}

int kali (int a, int b){
    return a * b ;
}

int modulus (int a, int b){
    return a % b ;
}

void pilihan (int pilihan, int a, int b){
    switch (pilihan){
        case 1:
            printf("Hasil Penjumlahan = %d \n", penjumlahan(a,b));
            break;
        case 2:
            printf("Hasil Perkalian = %d \n", kali(a,b));
            break;
        case 3:
            printf("Hasil Sisa  Hasil Bagi = %d \n", modulus (a,b));
            break;
        default:
            printf("Pilihan tidak sesuai \n");



    }
}

void selamatdatang(char nama []){
    printf("Selamat datang %s !!! di Kalkulator Dua Bilangan \n", nama);

}

int main (){
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n ");
    printf(" \t NAMA : ANDRI WIGUNA \n");
    printf(" \t NIM  : 241712062 \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    char nama [50];
    int pilihanmenu ;
    int numa, numb;

    printf("Masukkan nama panggilan anda (satu kata) =  ");
    scanf("%s", nama);
    selamatdatang(nama);

    while (1){
    printf(" ~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("   1. Penjumlahan     \n");
    printf("   2. Pekalian        \n");
    printf("   3. Sisa Hasil Bagi \n");
    printf(" ~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("Pilih kalkulator  yang di inginkan (1,2,3) \n");
    printf("Kalkulator Yangg di pilih: ");
    scanf("%d",&pilihanmenu);

    if (pilihanmenu < 1 || pilihanmenu >3 ){
        printf("Pilihan tidak sesuai , silahkan coba lagi \n");
        continue;
    }



    printf("nilai a = ");
    scanf("%d" ,&numa);
    printf("Nalai b =  ");
    scanf("%d" ,&numb);



    pilihan(pilihanmenu,numa, numb);
    printf("\n");
    printf (" Terimakasih telah menggunakan kalkulator ini");
    break;
    }

    return 0;
}

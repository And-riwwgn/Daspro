#include <stdio.h>


int main(){
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Selamat datang di perkalian matriks ^~^ \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    int matriks [2][2];
    int scalar;

   printf("Masukkan elemen matriks yang di inginkan : \n");
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("masukkan nilainya (%d, %d) = ", i+1,j+1);
            scanf("%d", &matriks[i][j]);
        }
    }
    printf("\n");
    printf("Hasil Matriks 2x2 : \n");
       for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
       }

    printf("\n");
    printf("Masukkan nilai sekalar :");
    scanf("%d", &scalar);

    printf("\n");
    printf("Hasil perkalian dengan scalar : \n");
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            matriks[i][j] *= scalar;
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
        printf("\n");
        printf("~~~~~~~~~~~~~~~~\n");
        printf("TERIMAKASIH :) \n");
        printf("~~~~~~~~~~~~~~~~");

    return 0;
}

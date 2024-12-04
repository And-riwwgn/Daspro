#include <stdio.h>

int main(){


    int nilai [9]={50,45,78,30,100,98,15,34};
    int jumlah_nilai= sizeof(nilai)/sizeof(nilai[0]);
    int total = 0;

    for(int i=0; i<9; i++){
        total += nilai[i];

    }
    float avg = (float)total/ (float) jumlah_nilai;
    printf("Rata rata nilai adalah : %f \n ", avg);

    return 0;
}


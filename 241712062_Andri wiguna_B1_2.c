#include <stdio.h>

int main() {

printf("====================================\n");
printf ("| \t  Halloww                  |\n");
printf ("========Masukan Biodata Anda======== \n");
char Nama [50];
char Nim [50];
char Kom [50];
printf("Nama :    ");
scanf ("%s" , &Nama);
printf("NIm  :    ");
scanf ("%s" , Nim);
printf("Kom  :    ");
scanf ("%s" , Kom);
printf("\t selamat datang %s (%s) %s\n", Nama, Nim, Kom);
printf("Kalkulator Menghitung Luas Bangun Datar \n");

// keliling lingkaran

int jarijari;
const float phi = 3.14 ;
printf ("1.Keliling lingkaran \n");
printf ("masukkan jarijari =    "),
scanf  ("%d",&jarijari);
float Kelilinglingkaran = jarijari*2*phi ;
printf ("Kelilinglingkaran =  %.2f\n", Kelilinglingkaran);

// Keliling Persegi
int sisi;
printf ("2.Keliling Peresgi \n");
printf ("Masukkan sisi     =    ");
scanf  ("%d",&sisi);
float Kelilingpersegi = 4*sisi;
printf ("Kelilingpersegi   = %.2f\n", Kelilingpersegi);

// Keliling segitiga
int a;
int b;
int c;

printf("3.Keliling Segitiga \n");
printf("masukkan a =   ");
scanf ("%d",&a);
printf("masukkan b =   ");
scanf ("%d",&b);
printf ("masukkan C =  ");
scanf ("%d",&c);
float Kelilingsegitiga = a+b+c ;
printf("Kelilingsegitiga = %.2f\n", Kelilingsegitiga);
return 0;
}

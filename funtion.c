#include <stdio.h>

float hitungvolumekerucut( float r, float t ){
return (r * r *t)/ 3 * 3.14;
    }
int main (){
    float  r, t, volume ;
    printf ("Masukkan Jari-Jari : ");
    scanf ("%f", &r);
    printf ("Masukkan Tinggi : ");
    scanf ("%f", &t);

    volume = hitungvolumekerucut (r, t);
    printf ("Volume kerucut adalah = %.2f \n", volume);

    return 0;

}



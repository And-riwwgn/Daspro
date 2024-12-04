#include <stdio.h>

int main() {
    int month;
    printf("\t Selamat Datang \n");

    printf("Masukkan Bulan yang ingin di cari = ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("Bulan Yang Kamu Cari Adalah Bulan Januari\n");
            printf("rawr\n");
            break;
        case 2:
            printf("Bulan Yang Kamu Cari adalah Bulan Februari\n");
            break;
        case 3:
            printf("Bulan Yang Kamu Cari Adalah Bulan Maret\n");
            break;
        case 4:
            printf("Bulan Yang Kamu Cari Adalah Bulan April\n");
            break;
        case 5:
            printf("Bulan Yang Kamu Cari Adalah Bulan Mei\n");
            break;
        case 6:
            printf("Bulan Yang Kamu Cari Adalah Bulan Juni\n");
            break;
        case 7:
            printf("Bulan Yang Kamu Cari Adalah Bulan Juli\n");
            break;
        case 8:
            printf("Bulan Yang Kamu Cari Adalah Bulan Agustus\n");
            break;
        case 9:
            printf("Bulan Yang Kamu Cari Adalah Bulan September\n");
            break;
        case 10:
            printf("Bulan Yang Kamu Cari Adalah Bulan Oktober\n");
            break;
        case 11:
            printf("Bulan Yang Kamu Cari Adalah Bulan November\n");
            break;
        case 12:
            printf("Bulan Yang Kamu Cari Adalah Bulan Desember\n");
            break;
        default:
            printf("Bulan tidak valid! Masukkan angka antara 1 dan 12.\n");
            printf("Silahkan ulangi lagi\n");
    }
    int days;
    printf("Masukkan Hari yang ingin di cari = ");
    scanf("%d", &days);
    switch (days) {
        case 1:
            printf("Hari Yang Kamu Cari Adalah Bulan Senin\n");
            break;
        case 2:
            printf("Hari Yang Kamu Cari adalah Bulan Selasa\n");
            break;
        case 3:
            printf("Hari Yang Kamu Cari Adalah Bulan Rabu\n");
            break;
        case 4:
            printf("Hari Yang Kamu Cari Adalah Bulan Kamis\n");
            break;
        case 5:
            printf("Hari Yang Kamu Cari Adalah Bulan Jumat\n");
            break;
        case 6:
            printf("Hari Yang Kamu Cari Adalah Bulan Sabtu\n");
            break;
        case 7:
            printf("Hari Yang Kamu Cari Adalah Bulan Minggu\n");
            break;
        default:
            printf("Bulan tidak valid! Masukkan angka antara 1 dan 7.\n");
            printf("Silahkan ulangi lagi\n");
    }
    printf("Terima kasih Telah Menggunakan jasa kami\n");


    return 0;
}

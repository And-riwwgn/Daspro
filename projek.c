#include <stdio.h>
#include <string.h>

void ManzDaftarBarang();
float IlmanTotal(int pilihan, int jumlah);
float tampilkanTotal(float total, int isMember);
int cekMember();
void prosesPembayaran(float total);

int main() {
    int pilihan, jumlah;
    float totalSemua = 0;
    char lagi;
    int isMember = 0;

    ManzDaftarBarang();
    do {
        printf("Pilih nomor barang: ");
        scanf("%d", &pilihan);
        printf("Masukkan jumlah barang: ");
        scanf("%d", &jumlah);

        totalSemua += IlmanTotal(pilihan, jumlah);

        printf("Apakah ingin menambah barang lain? (y/n): ");
        scanf(" %c", &lagi);
    } while (lagi == 'y' || lagi == 'Y');

    isMember = cekMember();

    float totalSetelahDiskon = tampilkanTotal(totalSemua, isMember);

    prosesPembayaran(totalSetelahDiskon);

    return 0;
}

void ManzDaftarBarang() {
    printf("+------------------+-------------------+\n");
    printf("|   Nomor Barang   |    Harga (Rp)     |\n");
    printf("+------------------+-------------------+\n");
    printf("| 1. Sabun         | Rp  5,000         |\n");
    printf("| 2. Sampo         | Rp 15,000         |\n");
    printf("| 3. Pasta Gigi    | Rp 10,000         |\n");
    printf("| 4. Minyak Goreng | Rp 20,000         |\n");
    printf("| 5. Beras         | Rp 50,000         |\n");
    printf("| 6. Roti          | Rp 8,000          |\n");
    printf("| 7. Tepung        | Rp 12,000         |\n");
    printf("| 8. Gula          | Rp 3,000          |\n");
    printf("| 9. Indomie       | Rp 2,000          |\n");
    printf("| 10. Mentega      | Rp 6,000          |\n");
    printf("+------------------+-------------------+\n");
}

float IlmanTotal(int pilihan, int jumlah) {
    float harga;

    switch (pilihan) {
        case 1:
            harga = 5000; // Harga Sabun
            break;
        case 2:
            harga = 15000; // Harga Sampo
            break;
        case 3:
            harga = 10000; // Harga Pasta Gigi
            break;
        case 4:
            harga = 20000; // Harga Minyak Goreng
            break;
        case 5:
            harga = 50000; // Harga Beras
            break;
        case 6:
            harga = 8000; // Harga roti
            break;
        case 7:
            harga = 12000; // Harga tepung
            break;
        case 8:
            harga = 3000; // Harga gula
            break;
        case 9:
            harga = 2000; // Harga indomie
            break;
        case 10:
            harga = 6000; // Harga mentega
            break;
        default:
            printf("Pilihan tidak valid.\n");
            return 0;
    }

    return harga * jumlah;
}


float tampilkanTotal(float total, int isMember) {
    float totalSetelahDiskon = total;

    if (isMember) {
        printf("Anda adalah member! Mendapatkan diskon 10%%\n");
        totalSetelahDiskon *= 0.90;
    }

    printf("Total harga yang harus dibayar: Rp %.2f\n", totalSetelahDiskon);

    return totalSetelahDiskon;
}

int cekMember() {
    char status;
    char kode[20];

    printf("Apakah Anda sudah menjadi member? (y/n): ");
    scanf(" %c", &status);

    if (status == 'y' || status == 'Y') {
        printf("Masukkan kode member Anda: ");
        scanf("%s", kode);

        if (strcmp(kode, "MEMBER2023") == 0 ||
            strcmp(kode, "MEMBER2024") == 0 ||
            strcmp(kode, "MEMBER2025") == 0) {
            printf("Kode member valid.\n");
            return 1;
        } else {
            printf("Kode member tidak valid.\n");
            return 0;
        }
    } else if (status == 'n' || status == 'N') {
        printf("Apakah Anda ingin mendaftar sebagai member dan mendapatkan diskon 10%%? (y/n): ");
        scanf(" %c", &status);

        if (status == 'y' || status == 'Y') {
            printf("Selamat, Anda telah terdaftar sebagai member! Kode member Anda adalah MEMBER2023.\n");
            return 1;
        }
    }

    return 0;
}

void prosesPembayaran(float total) {
    float uangDibayar, kembalian;

    printf("Masukkan jumlah uang yang dibayar: Rp ");
    scanf("%f", &uangDibayar);

    if (uangDibayar < total) {
        printf("Uang yang dibayar tidak cukup. Total yang harus dibayar adalah Rp %.2f\n", total);
    } else {
        kembalian = uangDibayar - total;
        if (kembalian > 0) {
            printf("Kembalian Anda: Rp %.2f\n", kembalian);
        } else {
            printf("Terima kasih, pembayaran Anda pas.\n");
        }
    }
}

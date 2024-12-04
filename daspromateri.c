#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dimensi asli kue
    float p = 83;
    float t = 62;
    float l = 71;

    // Volume dan luas kue
    float volume = p * t * l;
    float luasKue = 2 * (p * t + p * l + t * l);

    // Ukuran kue tersedia
    float ukuranKue[] = {0.25, 0.5, 1.0, 2.0, 4.0};
    int jumlah_faktor = sizeof(ukuranKue) / sizeof(ukuranKue[0]);

    printf("======================================================================\n");
    printf("|                    SELAMAT DATANG DI TOKO KUE USU :]                |\n");
    printf("======================================================================\n");

    // Pilihan varian rasa
    int varian;
    printf("\nVarian rasa:\n");
    printf("1. \033[38;5;94mCoklat\033[0m\n");
    printf("2. \033[38;5;107mMatcha\033[0m\n");
    printf("3. \033[38;5;226mDurian\033[0m\n");
    printf("4. \033[38;5;220mKeju\033[0m\n");
    printf("5. \033[38;5;230mWarna Vanilla\033[0m\n");
    printf("Pilih varian yang diinginkan: ");
    scanf("%d", &varian);

    float hargaori;
    switch (varian) {
        case 1: hargaori = 50000; break;
        case 2: hargaori = 60000; break;
        case 3: hargaori = 40000; break;
        case 4: hargaori = 55000; break;
        case 5: hargaori = 45000; break;
        default:
            printf("Varian tidak valid. Silakan jalankan ulang program dan pilih varian yang tersedia.\n");
            return 1;
    }

    // Tabel menu ukuran kue
    printf("\n==============================================================================\n");
    printf("                  UKURAN KUE BOLU YANG TERSEDIA                               \n");
    printf("+===================+====================+====================+==============+\n");
    printf("|       Ukuran      |   Luas             |   Volume           |  Harga (Rp)  |\n");
    printf("+===================+====================+====================+==============+\n");
    printf("|  Original         |     %10.2f     |     %10.2f     |   Rp%7.0f  |\n", luasKue, volume, hargaori);
    for (int i = 0; i < jumlah_faktor; i++) {
        float skala_luas = luasKue * ukuranKue[i];
        float skala_volume = volume * ukuranKue[i];
        float harga = hargaori * ukuranKue[i];
        printf("|  %-15.2f  |     %10.2f     |     %10.2f     |   Rp%7.0f  |\n",
               ukuranKue[i], skala_luas, skala_volume, harga);
    }
    printf("+===================+===================+===================+================+\n");

    // Pilih ukuran
    float skalaDipilih, hargaDipilih;
    printf("\nMasukkan ukuran yang dipilih (contoh: 0.25, 0.5, 1.0, dll): ");
    scanf("%f", &skalaDipilih);

    int ukuranValid = 0;
    for (int i = 0; i < jumlah_faktor; i++) {
        if (skalaDipilih == ukuranKue[i]) {
            hargaDipilih = hargaori * skalaDipilih;
            ukuranValid = 1;
            break;
        }
    }
    if (!ukuranValid) {
        printf("Ukuran tidak valid. Silakan jalankan ulang program.\n");
        return 1;
    }

    // Pilih jumlah kue
    int jumlah;
    printf("\nMasukkan jumlah kue yang ingin dibeli: ");
    scanf("%d", &jumlah);

    if (jumlah < 1) {
        printf("Jumlah tidak valid. Silakan jalankan ulang program.\n");
        return 1;
    }

    // Total harga
    float totalHarga = hargaDipilih * jumlah;

    // Pembayaran
    float uangDiberikan;
    printf("Harga kue anda adalah = Rp.%0.f", totalHarga);
    printf("\nMasukkan jumlah uang yang Anda berikan: Rp.");
    scanf("%f", &uangDiberikan);

    if (uangDiberikan < totalHarga) {
        printf("Uang yang Anda berikan kurang! Silakan kembali lagi nanti.\n");
        return 1;
    }

    // Hitung kembalian
    float kembalian = uangDiberikan - totalHarga;

    // Pilihan memotong kue
    int potong;
    printf("\nApakah Anda ingin memotong kue? (1 = Ya, 0 = Tidak): ");
    scanf("%d", &potong);

    if (potong == 1) {
        int jumlahPotong;
        printf("Berapa potong kue yang Anda inginkan? ");
        scanf("%d", &jumlahPotong);

        if (jumlahPotong > 0) {
            float ukuranPerPotong = (skalaDipilih * volume) / jumlahPotong;
            printf("\nKue Anda akan dipotong menjadi %d bagian dengan ukuran masing-masing %.2f cm³.\n",
                   jumlahPotong, ukuranPerPotong);
        } else {
            printf("Jumlah potong tidak valid.\n");
        }
    }

    // Tampilkan struk pembelian
    printf("\n======================================================================\n");
    printf("                            STRUK PEMBELIAN                           \n");
    printf("======================================================================\n");
    printf("Varian rasa    : ");
    switch (varian) {
        case 1: printf("Coklat\n"); break;
        case 2: printf("Matcha\n"); break;
        case 3: printf("Durian\n"); break;
        case 4: printf("Keju\n"); break;
        case 5: printf("Vanila\n"); break;
    }
    printf("Ukuran         : %.2f (skala ukuran)\n", skalaDipilih);
    printf("Harga per kue  : Rp%.0f\n", hargaDipilih);
    printf("Jumlah kue     : %d\n", jumlah);
    printf("---------------------------------------------------------------------\n");
    printf("TOTAL HARGA    : Rp%.0f\n", totalHarga);
    printf("Uang diberikan : Rp%.0f\n", uangDiberikan);
    printf("Kembalian Anda : Rp%.0f\n", kembalian);
    printf("======================================================================\n");

    return 0;
}

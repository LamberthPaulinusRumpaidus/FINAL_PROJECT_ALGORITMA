#include <iostream> // Mengimpor library iostream untuk input dan output
#include <windows.h> // Mengimpor library windows.h untuk fungsi Sleep dan SetConsoleTextAttribute

using namespace std; // Menggunakan namespace std untuk menghindari pengetikan std:: berulang kali

void SetColor(int value) {
    // Fungsi untuk mengubah warna teks pada konsol
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
    // Mengatur warna teks di konsol dengan menggunakan value
}

void showLoadingScreen() {
    // Fungsi untuk menampilkan layar loading
    for (int i = 1; i <= 100; i++) {
        // Loop dari 1 sampai 100
        Sleep(50);
        // Jeda selama 50 milidetik
        if (i % 2 == 0)
            // Jika i habis dibagi 2, ubah warna menjadi merah
            SetColor(12);
        else if (i % 3 == 0)
            // Jika i habis dibagi 3, ubah warna menjadi kuning
            SetColor(14);
        else if (i % 5 == 0)
            // Jika i habis dibagi 5, ubah warna menjadi ungu
            SetColor(13);
        else if (i % 7 == 0)
            // Jika i habis dibagi 7, ubah warna menjadi biru muda
            SetColor(11);
        else
            // Jika tidak memenuhi kondisi di atas, ubah warna menjadi hijau
            SetColor(10);

        std::cout << "\rLoading... " << i << "%";
        // Cetak persentase loading dengan mengganti baris sebelumnya (return)
        std::cout.flush();
        // Bersihkan buffer output
    }
    SetColor(10);
    // Ubah warna menjadi hijau setelah loading selesai
    std::cout << "\n";
}

int main() {
    // Fungsi utama program
    int pilihan;
    // Variabel untuk menyimpan pilihan menu
    string namaruang;
    // Variabel untuk menyimpan nama ruang (misalnya siswa atau nilai)
    int nilai;
    // Variabel untuk menyimpan jumlah nilai
    char pilihan2;
    // Variabel untuk menyimpan pilihan apakah ingin menggunakan program lagi atau tidak

atas:
    // Label untuk goto statement

atas2:
    // Label lain untuk goto statement

    system("cls");
    // Bersihkan layar konsol
    showLoadingScreen();
    // Tampilkan layar loading
    system("cls");
    // Bersihkan layar konsol lagi setelah loading selesai
    SetColor(14);
    // Ubah warna teks menjadi kuning

    cout << "SELAMAT DATANG DI AVERAGE SCORE APP " << endl;
    // Menampilkan pesan selamat datang di aplikasi perhitungan rata-rata
    SetColor(13);
    // Ubah warna teks menjadi ungu
    cout << "Mulai        : [Tekan]1" << endl;
    // Menampilkan opsi untuk memulai
    SetColor(11);
    // Ubah warna teks menjadi biru muda
    cout << "Pengaturan   : [Tekan]2" << endl;
    // Menampilkan opsi untuk pengaturan
    SetColor(12);
    // Ubah warna teks menjadi merah
    cout << "Keluar       : [Tekan]3" << endl;
    // Menampilkan opsi untuk keluar
    SetColor(10);
    // Ubah warna teks menjadi hijau
    cout << "Tekan disini : ";
    // Meminta pengguna untuk memasukkan pilihan menu
    cin >> pilihan;
    // Baca pilihan menu dari pengguna

    if (pilihan == 1) {
        system("cls");
        // Bersihkan layar konsol
        showLoadingScreen();
        // Tampilkan layar loading
        system("cls");
        // Bersihkan layar konsol lagi setelah loading selesai
        SetColor(14);
        // Ubah warna teks menjadi kuning
        cout << "SELAMAT DATANG DI AVERAGE SCORE APP" << endl;
        // Menampilkan pesan selamat datang
    }
    else if (pilihan == 2) {
        system("cls");
        // Bersihkan layar konsol
        showLoadingScreen();
        // Tampilkan layar loading
        system("cls");
        // Bersihkan layar konsol lagi setelah loading selesai
        SetColor(14);
        // Ubah warna teks menjadi kuning
        cout << "Silahkan masukkan nama ruang (seperti siswa atau nilai): ";
        // Meminta pengguna untuk memasukkan nama ruang
        cin >> namaruang;
        // Baca nama ruang dari pengguna
        goto atas;
        // Pindah ke label "atas" untuk memulai penghitungan nilai
    }
    else if (pilihan == 3) {
        system("cls");
        // Bersihkan layar konsol
        showLoadingScreen();
        // Tampilkan layar loading
        system("cls");
        // Bersihkan layar konsol lagi setelah loading selesai
        SetColor(14);
        // Ubah warna teks menjadi kuning
        cout << "Terima kasih Telah Menggunakan Program ini" << endl;
        // Menampilkan pesan terima kasih
        return 0;
        // Keluar dari program
    }
    SetColor(14);
    // Ubah warna teks menjadi kuning
    cout << "Masukkan jumlah " << namaruang << ": ";
    // Meminta pengguna untuk memasukkan jumlah nilai
    cin >> nilai;
    // Baca jumlah nilai dari pengguna

    double total = 0;
    // Inisialisasi variabel total untuk menyimpan total nilai
    for (int i = 0; i < nilai; i++) {
        // Loop untuk memasukkan nilai sebanyak yang diminta
        double nilai;
        // Variabel sementara untuk menyimpan nilai
        SetColor(14);
        // Ubah warna teks menjadi kuning
        cout << "Masukkan nilai " << namaruang << " ke-" << i + 1 << ": ";
        // Meminta pengguna untuk memasukkan nilai
        cin >> nilai;
        // Baca nilai dari pengguna
        total += nilai;
        // Tambahkan nilai ke total
    }

    double rata_rata = total / nilai;
    // Hitung rata-rata dari total nilai
    SetColor(10);
    // Ubah warna teks menjadi hijau
    cout << "Rata-rata " << namaruang << " adalah: " << rata_rata << endl;
    // Menampilkan hasil rata-rata

    cout << "Apakah Anda ingin menggunakan program lagi? (y/n): ";
    // Meminta pengguna apakah ingin menggunakan program lagi
    cin >> pilihan2;
    // Baca pilihan pengguna

    if (pilihan2 == 'y' || pilihan2 == 'Y') {
        goto atas2;
        // Kembali ke awal program jika pengguna ingin melanjutkan
    }
    else {
        cout << "Terima kasih telah menggunakan program ini" << endl;
        // Menampilkan pesan terima kasih
        return 0;
        // Keluar dari program
    }
}


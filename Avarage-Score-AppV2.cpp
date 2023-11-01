#include <iostream> // Mengimpor library iostream untuk input dan output
#include <windows.h> // Mengimpor library windows.h untuk fungsi Sleep dan SetConsoleTextAttribute

using namespace std; // Menggunakan namespace std untuk menghindari pengetikan std:: berulang kali

void SetColor(int value) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value); // Mengatur warna teks di konsol dengan menggunakan value
}

void showLoadingScreen() {
    for (int i = 1; i <= 100; i++) {
        Sleep(50); // Jeda selama 50 milidetik

        // Menggunakan pernyataan switch untuk mengatur warna teks berdasarkan i % 10
        switch (i % 10) {
        case 0:
        case 8:
            SetColor(10); // Hijau
            break;
        case 2:
        case 4:
            SetColor(12); // Merah
            break;
        case 3:
        case 9:
            SetColor(14); // Kuning
            break;
        case 5:
            SetColor(13); // Ungu
            break;
        case 7:
            SetColor(11); // Biru muda
            break;
        default:
            SetColor(10); // Hijau (untuk nilai lainnya)
            break;
        }

        cout << "\rLoading... " << i << "%"; // Cetak persentase loading dengan mengganti baris sebelumnya (return)
        cout.flush(); // Bersihkan buffer output
    }
    SetColor(10); // Ubah warna menjadi hijau setelah loading selesai
    cout << "\n";
}

int main() {
    int pilihan; // Variabel untuk menyimpan pilihan menu
    string namaruang; // Variabel untuk menyimpan nama ruang (misalnya siswa atau nilai)
    int nilai; // Variabel untuk menyimpan jumlah nilai
    char pilihan2; // Variabel untuk menyimpan pilihan apakah ingin menggunakan program lagi atau tidak

atas: // Label untuk goto statement

atas2: // Label lain untuk goto statement

    system("cls"); // Bersihkan layar konsol
    showLoadingScreen(); // Tampilkan layar loading

atas3: // Label lain untuk goto statement
    system("cls"); // Bersihkan layar konsol lagi setelah loading selesai
    SetColor(14); // Ubah warna teks menjadi kuning

    cout << "SELAMAT DATANG DI AVERAGE SCORE APP " << endl; // Menampilkan pesan selamat datang di aplikasi perhitungan rata-rata
    SetColor(13); // Ubah warna teks menjadi ungu
    cout << "Mulai        : [Tekan]1" << endl; // Menampilkan opsi untuk memulai
    SetColor(11); // Ubah warna teks menjadi biru muda
    cout << "Pengaturan   : [Tekan]2" << endl; // Menampilkan opsi untuk pengaturan
    SetColor(12); // Ubah warna teks menjadi merah
    cout << "Keluar       : [Tekan]3" << endl; // Menampilkan opsi untuk keluar
    SetColor(10); // Ubah warna teks menjadi hijau
    cout << "Tekan disini : ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
        system("cls"); // Bersihkan layar konsol
        showLoadingScreen(); // Tampilkan layar loading
        system("cls"); // Bersihkan layar konsol lagi setelah loading selesai
        SetColor(14); // Ubah warna teks menjadi kuning
        cout << "SELAMAT DATANG DI AVERAGE SCORE APP" << endl; // Menampilkan pesan selamat datang
        break;
    case 2:
        system("cls"); // Bersihkan layar konsol
        showLoadingScreen(); // Tampilkan layar loading
        system("cls"); // Bersihkan layar konsol lagi setelah loading selesai
        SetColor(14); // Ubah warna teks menjadi kuning
        cout << "Silahkan masukkan nama ruang (seperti siswa atau nilai): ";
        cin >> namaruang; // Baca nama ruang dari pengguna
        goto atas; // Pindah ke label "atas" untuk memulai penghitungan nilai
        break;
    case 3:
        system("cls"); // Bersihkan layar konsol
        showLoadingScreen(); // Tampilkan layar loading
        system("cls"); // Bersihkan layar konsol lagi setelah loading selesai
        SetColor(14); // Ubah warna teks menjadi kuning
        cout << "Terima kasih Telah Menggunakan Program ini" << endl; // Menampilkan pesan terima kasih
        return 0;
    default:
        goto atas3; // Pindah ke label "atas3" jika pilihan tidak valid
        break;
    }
    SetColor(14); // Ubah warna teks menjadi kuning
    cout << "Masukkan jumlah " << namaruang << ": "; // Meminta pengguna untuk memasukkan jumlah nilai
    cin >> nilai;

    double total = 0; // Inisialisasi variabel total untuk menyimpan total nilai
    for (int i = 0; i < nilai; i++) {
        double nilai; // Variabel sementara untuk menyimpan nilai
        SetColor(14); // Ubah warna teks menjadi kuning
        cout << "Masukkan nilai " << namaruang << " ke-" << i + 1 << ": "; // Meminta pengguna untuk memasukkan nilai
        cin >> nilai; // Baca nilai dari pengguna
        total += nilai; // Tambahkan nilai ke total
    }

atas4:
    system("cls");

    double rata_rata = total / nilai; // Hitung rata-rata dari total nilai
    SetColor(10); // Ubah warna teks menjadi hijau
    cout << "Rata-rata " << namaruang << " adalah: " << rata_rata << endl;
    cout << "Apakah Anda ingin menggunakan program lagi? (y/n): ";
    cin >> pilihan2;

    switch (pilihan2) {
    case 'y':
    case 'Y':
        goto atas2; // Kembali ke awal program jika pengguna ingin melanjutkan
        break;
    case 'N':
    case 'n':
        cout << "Terima kasih telah menggunakan program ini" << endl; // Menampilkan pesan terima kasih
        return 0;
        break;
    default:
        goto atas4; // Pindah ke label "atas4" jika pilihan tidak valid
    }
}

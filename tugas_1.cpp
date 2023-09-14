#include <bits/stdc++.h>

const int MAX_MAHASISWA = 100;

using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    char jenisKelamin;
    float ipk;
};

int main() {
    Mahasiswa daftarMahasiswa[MAX_MAHASISWA];
    int counter = 0;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Hapus Data Mahasiswa" << endl;
        cout << "3. Tampilkan Data Mahasiswa" << endl;
        cout << "4. Ubah Data Mahasiswa" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih opsi : ";

        int pilihan;
        cin >> pilihan;

        if (pilihan == 1) {
            if (counter < MAX_MAHASISWA) {
                Mahasiswa mahasiswa;
                cout << "Masukkan nama mahasiswa: ";
                cin.ignore();
                getline(cin, mahasiswa.nama);
                cout << "Masukkan jenis kelamin (L/P): ";
                cin >> mahasiswa.jenisKelamin;
                cout << "Masukkan umur mahasiswa: ";
                cin >> mahasiswa.umur;
                cout << "Masukkan IPK mahasiswa: ";
                cin >> mahasiswa.ipk;

                daftarMahasiswa[counter] = mahasiswa;
                counter++;
                cout << "Data mahasiswa telah ditambahkan." << endl;
            } else {
                cout << "Jumlah maksimum mahasiswa telah tercapai." << endl;
            }
        } else if (pilihan == 2) {
            if (counter == 0) {
                cout << "Daftar mahasiswa kosong." << endl;
            } else {
                cout << "Daftar Mahasiswa:" << endl;
                for (int i = 0; i < counter; ++i) {
                    cout << i + 1 << ". Nama: " << daftarMahasiswa[i].nama << ", Jenis Kelamin: " << daftarMahasiswa[i].jenisKelamin << ", Umur: " << daftarMahasiswa[i].umur << ", IPK: " << fixed << setprecision(2) << daftarMahasiswa[i].ipk << endl;
                }

                cout << "Pilih nomor mahasiswa yang ingin dihapus (1-" << counter << "): ";
                int nomor;
                cin >> nomor;

                if (nomor >= 1 && nomor <= counter) {
                    for (int i = nomor - 1; i < counter - 1; ++i) {
                        daftarMahasiswa[i] = daftarMahasiswa[i + 1];
                    }
                    counter--;
                    cout << "Data mahasiswa telah dihapus." << endl;
                } else {
                    cout << "Nomor mahasiswa tidak valid." << endl;
                }
            }
        } else if (pilihan == 3) {
            if (counter == 0) {
                cout << "Daftar mahasiswa kosong." << endl;
            } else {
                cout << "Daftar Mahasiswa:" << endl;
                for (int i = 0; i < counter; ++i) {
                    cout << "Nama: " << daftarMahasiswa[i].nama << ", Jenis Kelamin: " << daftarMahasiswa[i].jenisKelamin << ", Umur: " << daftarMahasiswa[i].umur << ", IPK: " << fixed << setprecision(2) << daftarMahasiswa[i].ipk << endl;
                }
            }
        } else if (pilihan == 4) {
        	cout << "Daftar Mahasiswa:" << endl;
            for (int i = 0; i < counter; ++i) {
                cout << "Nama: " << daftarMahasiswa[i].nama << ", Jenis Kelamin: " << daftarMahasiswa[i].jenisKelamin << ", Umur: " << daftarMahasiswa[i].umur << ", IPK: " << fixed << setprecision(2) << daftarMahasiswa[i].ipk << endl;
            }
            cout << "Masukkan nomor mahasiswa yang ingin diubah (1-" << counter << ") ";
            int nomor;
            cin >> nomor;

            if (nomor >= 1 && nomor <= counter) {
                Mahasiswa& mahasiswa = daftarMahasiswa[nomor - 1];
                cout << "Data mahasiswa saat ini:" << endl;
                cout << "Nama: " << mahasiswa.nama << ", Jenis Kelamin: " << mahasiswa.jenisKelamin << ", Umur: " << mahasiswa.umur << ", IPK: " << fixed << setprecision(2) << mahasiswa.ipk << endl;

                cout << "Masukkan data mahasiswa yang baru:" << endl;
                cout << "Masukkan nama mahasiswa: ";
                cin.ignore();
                getline(cin, mahasiswa.nama);
                cout << "Masukkan jenis kelamin (L/P): ";
                cin >> mahasiswa.jenisKelamin;
                cout << "Masukkan umur mahasiswa: ";
                cin >> mahasiswa.umur;
                cout << "Masukkan IPK mahasiswa: ";
                cin >> mahasiswa.ipk;

                cout << "Data mahasiswa telah diubah." << endl;
            } else {
                cout << "Nomor mahasiswa tidak valid." << endl;
            }
        } else if (pilihan == 5) {
            break;
        } else {
            cout << "Opsi tidak valid. Silakan pilih opsi yang benar (1/2/3/4/5)." << endl;
        }
    }

    return 0;
}


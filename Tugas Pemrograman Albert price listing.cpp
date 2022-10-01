// Natanael Albert, TI, 22/503184/TK/54968)
// Tugas Pemrogramman TLS

#include <iostream>
using namespace std;

long int jumlah, temp, sum = 0, harga[1000], nomor[1000];
string nama[1000], cek;

void start_up() {
	cout << "--------------------------------------" << endl;
	cout << "----Albert's Listing Price Machine----" << endl;
	cout << "--------------------------------------" << endl << endl;
}

void banyak_data() {
	cout << "Masukkan banyak barang yang ingin dimasukkan!" << endl;
	cout << "Jumlah data: ";
	cin >> jumlah;
	cout << endl << endl;
}

void listing() {	
	cout << "Note : Masukkan nama barang(1 kata saja) dan harga barang! Contoh: Buku 1000 (Artinya ada barang bernama buku dan berharga Rp 1000)" << endl;
	for (int i = 1; i <= jumlah; i++) {
		cout << "Masukkan nama dan harga dari data ke-" << i << ": ";
		cin >> nama[i] >> harga[i];
	}
	cout << endl;
}

void perhitungan() {	
	for (int i = 1; i <= jumlah; i++) {
		cout << "Banyak " << nama[i] << " yang ingin dibeli: ";
		cin >> nomor[i];
		
		sum += harga[i] * nomor[i];
	}
	
	cout << endl;
	cout << "Total harga dari: " << endl;
	for (int i = 1; i <= jumlah; i++) {
		cout << nomor[i] << " " << nama[i] << " seharga " << harga[i] << " memiliki total harga sebanyak " << nomor[i]*harga[i] << endl;
	}
	cout << "SEHINGGA TOTAL KESELURUHAN SEBANYAK: " << sum << endl << endl;
	
	sum = 0;
	cout << "Apakah ingin menghitung harga lagi? [yes/no] : ";
	cin >> cek;
	if (cek == "yes") {
		cout << endl;
		cout << "Apakah ingin menggunakan daftar nama barang dan harga yang sama? [yes/no] : ";
		cin >> cek;
		cout << endl;
		if (cek == "yes") {
			perhitungan();
		} else {
			banyak_data();
			listing();
			perhitungan();
		}
	} else {
		cout << endl;
		cout << "TERIMA KASIH SUDAH MENGGUNAKAN Albert's Listing Price Machine";
	}
}



int main () {
	start_up();
	banyak_data();
	listing();
	perhitungan();
}

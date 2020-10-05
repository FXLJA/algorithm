#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>

using namespace std;

int main()

{
char namabarang[20];
int harga;
int jumlah;
int total;
int pembayaran;
int kembali;

	cout << "Halo!" << endl;
	
	cout << "Masukkan nama barang: ";
	cin.getline(namabarang, 20);
	
	cout << "Masukkan harga satuan: ";
	cin >> harga;
	
	cout << "Masukkan jumlah barang: ";
	cin >> jumlah;
	
	total = harga * jumlah;
	
	cout << "Total harga: " << total;
	
	cout << endl;
	
	cout << "Masukkan jumlah pembayaran: ";
	cin >> pembayaran;
	
	kembali = (pembayaran - total);
	
	cout << "Kembali: " << kembali;

	getch();
	return 0;
}

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std; 

int main()

{
char nama[20];
int nim;
char alamat[30];
char programstudi[20];
int berat_badan;

	cout << "Halo!" << endl;
	
	cout << "Masukkan nama Anda: ";
	cin.getline(nama, 20);
	
	cout << "Masukkan NIM Anda: ";
	cin >> nim;
	
	cout << "Masukkan alamat Anda: ";
	cin.getline(alamat, 30);
	
	cout << "Masukkan program studi Anda: ";
	cin >> programstudi;
	
	cout << "Masukkan berat badan Anda, jangan bohong!: ";
	cin >> berat_badan;
	
	cout << endl;
	
	cout << "Nama lengkap Anda adalah " << nama << endl;
	cout << "NIM Anda " << nim << endl;
	cout << "Anda berdomisili di " << alamat << endl;
	cout << "Program studi Anda " << programstudi << ", masuk setengah terpaksa akibat tuntutan orang tua" << endl;
	cout << "Anda tidak ingat berat badan Anda ya? Sayang Sekali" << endl;
	
	getch();
	return 0;
}

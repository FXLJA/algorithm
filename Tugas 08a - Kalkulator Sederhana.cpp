#include <iostream>
#include <conio.h>

using namespace std;

int tambah (int a, int b)
{
	return (a + b);
}

int kurang (int a, int b)
{
	return (a - b);
}

int kali (int a, int b)
{
	return (a * b);
}

int bagi (int a, int b)
{
	return (a / b);
}

void menu()
{
	cout << "Kalkulator Aritmatika"<<endl;
	cout << "1.	Penjumlahan"<<endl;
	cout << "2.	Pengurangan"<<endl;
	cout << "3.	Perkalian"<<endl;
	cout << "4.	Pembagian"<<endl;
	cout << "Pilihan Anda: ";
}

void pilihan()
{
int pilih;
int a;
int b;
float hasil;

	cin>>pilih;
	cout << "Angka pertama: ";
	cin>>a;
	cout << "Angka kedua: ";
	cin>>b;
	
	switch (pilih)
	{
		case 1:
		{
		hasil = tambah (a , b);
		break;
		}
		
		case 2:
		{
		hasil = kurang (a , b);
		break;
		}
		
		case 3:
		{
		hasil = kali (a , b);
		break;
		}
		
		case 4:
		{
		hasil = bagi (a , b);
		break;
		}
		
		default:
		{
		cout << "Kurang Aqua kamu"<<endl;
		}
	}
	
	cout << "Hasil: "<<hasil;
}

int main()
{
	menu();	
	pilihan();
	
	getch();
	return 0;
}

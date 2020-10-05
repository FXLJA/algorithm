#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int total2(int barang, int harga)
{
	return (barang * harga);
}

int poin2(int d)
{
	return (d / 1000);
}

int redeem (int poin)
{
	if (poin >= 50)
	{
	return 1;
	}
		else
		{
		return 0;
		}
}

void menu()
{
	cout << "1. Menentukan total harga"<<endl;
	cout << "2. Mengonversikan poin"<<endl;
	cout << "3. Redeem"<<endl;
	cout << "Masukkan pilihan Anda: ";
}


void pilih()
{
int barang;
int harga;
int total;
int red;
int poin;
int pilih;
int d;
	
	menu();
	cin>>pilih;
	total = 0;
	switch (pilih)
	{
		case 1:
		{
		cout << "Jumlah barang: ";
		cin>>barang;
		cout << "Harga barang: ";
		cin>>harga;
		total = total2(barang, harga);
		cout << "Total harga: "<<total;	
		break;
		}
		
		case 2:
		{
			if (total = 0)
			{
			cout << "Silakan bereskan pilihan 1";
			}
				else
				{
				poin = poin2(d);
				}
			
			cout << "Total poin Anda: "<<poin;
		break;
		}
		
		case 3:
		{
		red = redeem (poin);
			if (red <=50)
			{
			cout << "Poin tidak cukup";
			}
				else
				{
				"Nih, ambil";
				}
		break;
		}
		
		default:
		{
		cout << "Kurang Aqua kamu ya?";
		}
	}
}

bool mau ()
{
char yn;

	do
	{
		cout << "\nMau lagi gak?(y/n): "; 
		cin >> yn;
	}
	while(yn !='y' && yn !='n');
	
	system("cls");
	return (yn == 'y');
}

int main()
{
	do
	{
		pilih();
	}
	while(mau());
		
getch();
return 0;
}

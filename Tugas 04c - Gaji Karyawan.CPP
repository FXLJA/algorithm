#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()

{
int golongan;
int pokok;
int tunjangan;
int anak;
int total;

	cout << "Pembayaran Gaji Karyawan Berdasarkan Golongan" << endl;
	cout << "Golongan 1 (1000 - 5000)" << endl;
	cout << "Golongan 2 (5001 - 10000)" << endl;
	cout << "Golongan 3 (10001 - 20000)" << endl;
	cout << "Golongan 4 (> 20001)" << endl;
    cout << endl;

	cout << "Masukkan Jenis Golongan Karyawan: ";
	cin >> golongan;

	switch (golongan)
	{
		case 1:
   		{
			cout << "Gaji pokok: ";
			cin >> pokok;
			cout << "Jumlah anak karyawan: ";
			cin >> anak;
			
			tunjangan = 0.1 * pokok * anak;
		
			if (anak>2)
			{
				tunjangan = 1000;
			}
		
			total = pokok + tunjangan;
		
			cout << "Tunjangan: " << tunjangan;
			cout << endl;
			cout << "Total gaji karyawan: " << total;
			break;
		}
		
		case 2:
     	{
			cout << "Gaji pokok: ";
			cin >> pokok;
			
			cout << "Jumlah anak karyawan: ";
			cin >> anak;
			
			tunjangan = 0.1 * pokok * anak;
		
			if (anak>2)
			{
				tunjangan = 1000;
			}
		
			total = pokok + tunjangan;
		
			cout << "Tunjangan: " << tunjangan;
			cout << endl;
			cout << "Total gaji karyawan: "<<total;
			break;
		}
		
		case 3:
 		{
			cout << "Gaji pokok: ";
			cin >> pokok;
			
			cout << "Jumlah anak karyawan: ";
			cin >> anak;
			
			tunjangan = 0.1 * pokok * anak;
			
			if (anak>2)
			{
				tunjangan = 1000;
			}

			total = pokok + tunjangan;

			cout << "Tunjangan: " << tunjangan;
			cout << endl;
			cout << "Total gaji karyawan: " << total;
			break;
		}
	
		case 4:
   		{
			cout << "Gaji pokok: ";
			cin >> pokok;
			
			cout << "Jumlah anak karyawan: ";
			cin >> anak;
			
			tunjangan = 0.1 * pokok * anak;
			
			if (anak>2)
			{
				tunjangan = 1000;
			}
			
			total = pokok + tunjangan;
			
			cout << "Tunjangan: " << tunjangan;
			cout << endl;
			cout << "Total gaji karyawan: " << total;
			break;
		}

	}
	
	getch();
	return 0;
}

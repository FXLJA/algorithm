#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>

using namespace std;

//Deklarasi variabel
string nama ['x'];
long nim ['x'];
int tm ['x'];
int uts ['x'];
int uas ['x'];
float final ['x'];
string grade ['x'];
int i = 0;
int x;

//Pilihan 1
void input_data()
{
	system("cls");
	cout << "Masukkan jumlah mahasiswa 	: ";
	cin >> x;
	cout << endl;
	
	while (i < x)
	{
	cout << "Masukkan nama mahasiswa	: ";
	cin >> nama[i];
	cout << "Masukkan NIM mahasiswa 	: ";
	cin >> nim[i];
	cout << endl;
	
	cout << "Masukkan nilai tugas 	: ";
	cin >> tm[i];
	cout << "Masukkan nilai UTS 	: ";
	cin >> uts[i];
	cout << "Masukkan nilai UAS 	: ";
	cin >> uas[i];

	final[i] = 0.3 * tm[i] + 0.3 * uts[i] + 0.4 * uas[i];
	cout << "Nilai akhir 	: " << final[i];
	cout << endl;
	
	if (final[i] <= 100 && final[i] >= 81)
	{
		grade[i] = "A";
	}
		else if (final[i] <= 80 && final[i] >= 71)
		{
			grade[i] = "B";
		}
		
		else if (final[i] <= 70 && final[i] >= 51)
		{
			grade[i] = "C";
		}
		
			else
			{
				grade[i] = "D";
			}
			
	cout << "Grade 	: " << grade[i] << endl;
	cout << endl;
	i++;
	}
}

//Pilihan 2
void display()
{
	system("cls");
	cout << "Nama \t\t NIM \t\t TM \t\t UTS \t\t UAS \t\t Final \t\t Grade" << endl;
	
	for (i = 0; i < x; i++)
	{
		cout << nama[i] << " \t\t " << nim[i] << " \t\t " << tm[i] << " \t\t " << uts[i] << " \t\t " << uas[i] << " \t\t " << final[i] << " \t\t " << grade[i] << endl;
	}

getch();
}

//Pilihan 3
void sort()
{
int j;
int k;
int temp;
	
	for (j = 0; j < x; j++)
    {
        for (k = (x-1); k > 0; k--)
        {
            if (nim[k] < nim[k-1])
            {
                temp = nim[k];
                nim[k] = nim[k-1];
                nim[k-1] = temp;
            }
        }
    }
}
//Pilihan 4
void search()
{
long search_nim;
bool isFound = false;

	system("cls");
	cout << "Masukkan NIM mahasiswa yang ingin dicari: ";
	cin >> search_nim;
	cout << endl;
	
	for (i = 0; i <= x; i++)
	{
		if (search_nim == nim[i])
		{
			cout << "Nama mahasiswa 	: " << nama[i] << endl;
			cout << "Nilai tugas 	: " << tm[i] << endl;
			cout << "Nilai UTS 	: " << uts[i] << endl;
			cout << "Nilai UAS 	: " << uas[i] << endl;
			cout << "Nilai akhir 	: " << final[i] << endl;
			cout << "Grade 		: " << grade[i];
			isFound = true;
		}
			else if (i == x && isFound == false)
			{
				cout << "NIM tidak terdaftar";
			}
	}
	
getch();
}

//Main Program
int main()
{
int menu;

	do
	{
	system("cls");
	cout << "1. Input data mahasiswa" << endl;
	cout << "2. Tampilkan data mahasiswa" << endl;
	cout << "3. Sorting nilai" << endl;
	cout << "4. Cari mahasiswa" << endl;
	cout << "5. Keluar" << endl;
	cout << "Pilihan anda: ";
	cin >> menu;
	
		switch (menu)
		{
			case 1:
			{
				input_data();
				break;
			}
			
			case 2:
			{
				display();
				break;
			}
			
			case 3:
			{
				sort();
				break;
			}
			
			case 4:
			{
				search();
				break;
			}
			
			case 5:
			{
				system ("EXIT");
			}
		}
	}
	while (menu != 5);
	
getch();
return 0;
}

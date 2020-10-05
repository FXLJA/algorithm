#include <iostream>
#include <conio.h>

using namespace std;

double luas_lingkaran (int,int);
double luas_p_tabung (int,int,int);
double volume_tabung (int,int,int);
void tampilan();
void pilihan();

double luas_lingkaran(int r, float pi)
{
	return (pi * r * r);
}

double luas_p_tabung(int r, int t, float pi)
{
	return (2 * pi * r * (r + t));
}

double volume_tabung(int r, int t, float pi)
{
	return (pi * r * r * t);
}

void tampilan()
{
	cout << "Bulatan\n";
	cout << "1. Luas Lingkaran"<<endl;
	cout <<	"2. Luas Permukaan Tabung"<<endl;
	cout <<	"3. Volume Tabung"<<endl;
	cout << "Masukan pilihan Anda: ";
}

void pilihan()
{
int pil;
int r;
int t;
double hasil;
const float pi = 3.14;

   tampilan();
   cin >> pil;
   switch (pil)
   {
		case 1:
		{
			cout << "Masukan jari-jari: "; 
			cin >> r;
			hasil = luas_lingkaran(r,pi);
			break;
		}
		
		case 2:
		{
			cout << "Masukan jari-jari: "; 
			cin >> r;
			cout << "Masukan tinggi   : "; 
			cin >> t;
			hasil = luas_p_tabung(r,t,pi);
			break;
		}
		
		case 3:
		{
			cout << "Masukan jari-jari: "; 
			cin >> r;
			cout << "Masukan tinggi   : "; 
			cin >> t;
			hasil = volume_tabung(r,t,pi);
			break;
		}
		
		default:
		{
			cout << "Kurang Aqua";
		}
	}
	
   cout << "Hasil: " << hasil;
}

int main ()
{
	pilihan();
	getch();
	return 0;
}

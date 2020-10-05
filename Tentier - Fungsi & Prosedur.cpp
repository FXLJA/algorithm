#include <iostream>
#include <conio.h>

using namespace std;

int a;
int b;
int hasil;

//Function
int tambah (int a, int b)
{
return a + b;
}

//Prosedur
void kurang (int a, int b)
{
hasil = a - b;
cout<<"Hasil pengurangan: "<<hasil;
}

//Main Program
int main()
{
	cout<<"Masukkan nilai A: ";
	cin>>a;
	cout<<"Masukkan nilai B: ";
	cin>>b;
	cout<<endl;
	
	cout<<"Hasil penjumlahan: "<<tambah(a, b)<<endl;
	kurang(a, b);
	
getch();
}

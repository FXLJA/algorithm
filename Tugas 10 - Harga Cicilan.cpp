#include <iostream>
#include <conio.h>

using namespace std;

int harga;
int tenor;
int pokok;
float bunga;
float interest;
float bayar_bunga;
float total;

	void input()
	{
	cout<<"Harga barang: ";
	cin>>harga;
	cout<<"Tenor (dalam bulan): ";
	cin>>tenor;
	cout<<"Bunga (dalam %): ";
	cin>>bunga;
	}

	void proses()
	{
	interest = bunga / 100;
	pokok = harga / tenor;
	}

	void output()
	{
	cout<<"\nBunga: "<<bunga<<"%"<<endl;		
	cout<<"Cicilan pokok: "<<pokok<<endl;

	cout<<"\nCicilan ke 1\n";
	cout<<"-----------------------------------\n";
	cout<<"Bunga ke 1         : Rp "<< harga * interest <<endl;						
	cout<<"Total bayaran ke 1 : Rp "<< pokok + ( harga * interest ) <<endl;
	
		for (int i = 2; i <= tenor; i++)
		{
		cout<<"\nCicilan ke- "<< i <<endl;
		cout<<"-----------------------------------\n";
		bayar_bunga = (harga - (pokok * (i-1))) * interest;		 
		total = pokok + bayar_bunga;
		cout<<"Bunga ke- "<< i <<"         = Rp "<<bayar_bunga<<endl;
		cout<<"Total bayaran ke- "<< i <<" = Rp "<<total<<endl;
		}	
	}

//Main Function
int main()
{
	input();
	proses();
	output();

getch();
}

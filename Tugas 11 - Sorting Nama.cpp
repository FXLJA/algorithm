#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{
int x;	
int i;
int j;
int k;
string nama['n'];
string temp;

	cout<<"Masukan Banyak Data : ";
	cin>>x;
	cout<<endl;
	
	for(i = 0; i < x; i++)
	{
	cout<<"Data ke - "<<i+1<<endl;
	cout<<"Masukan nama : ";
	cin>>nama[i];
	}
	
	cout<<"\n\nData Sebelum Diurutkan : \n";
	for(i = 0; i < x; i++)
	{
	cout<<(i+1)<<". "<<nama[i]<<" \n";
	}
	
	//Sorting (metode insertion sort)
	cout<<"\n\nData setelah diurut: \n";
	for(i = 0; i < x; i++)
	{
		for(j = 0; j <= i; j++)
		{
			if(nama[i] < nama[j])
			{
			temp = nama[i];
			nama[i] = nama[j];
			nama[j] = temp;
			}
		}
		cout<<endl;
		
		//Menampilkan step
		cout<<"Step - "<<(i+1)<<": ";
		for(k = 0; k <= i; k++)
		{
		cout<<" "<<nama[k];
		}
	}
	cout<<"\n\n";
	
	for(i = 0; i < x; i++)
	{
	cout<<(i+1)<<". "<<nama[i]<<endl;
	}
	
getch();
}

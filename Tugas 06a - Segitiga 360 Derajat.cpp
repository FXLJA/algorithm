#include <iostream>
#include <conio.h>

using namespace std;

int main() 

{
	
int i;
int j;
int k;
int x;
	
	cout<<"Masukkan batas x: ";
	cin>>x;
	cout<<endl;
	
	for (i = 0; i<x; i++) 
	{
		for (j = 0; j<=i; j++)
		{
		cout<<"* ";
		}
	cout<<endl;
	}
	cout<<endl;

		for (i = 1; i<=x; i++)
		{
			for (j = i; j<=x; j++)
			{
			cout<<"* ";
			}
		cout<<endl;
		}
		cout<<endl;

			for (i = 1; i<=x; i++)
			{
				for (j=(x-i)*2; j>0; j--) 
				{
				cout<<" ";
				}
					for (j = 0; j<i; j++)
					{
					cout<<"* ";
					}
			cout<<endl;
			}
			cout<<endl;

			for (i = 1; i <= x; i++)
			{
				for (j = 1; j <= x; j++)
				{
					if (i <= j)
					{
						cout << "*";
					}
						else
						{
							cout << " ";
						}
				}
				cout << endl;
			}
getch();

}

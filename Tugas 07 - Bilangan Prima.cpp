#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int bil;
int jum;
int i;
	
	A:
	cout<< "Masukkan bilangan: ";
	cin>>bil;
	jum = 0;
	
	for (i=1; i<=bil; i++)
	{
		if (bil%i==0)
		{
		jum+=1;
		}
	}
	
		if (jum==2)
		{
		cout<<"Prima";
		}
			else
			{
			cout<<"Bukan prima";
			}
	cout<<endl;
	cout<<endl;
	goto A;
				
getch();
}

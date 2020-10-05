#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
int a;
int b;
int c;
int d;
int e;
int n;
int max;
int min;

	cout << "Masukkan bilangan pertama: ";
	cin>>a;
   	cout << "Masukkan bilangan kedua: ";
   	cin>>b;
   	cout << "Masukkan bilangan ketiga: ";
   	cin>>c;
   	cout << "Masukkan bilangan keempat: ";
   	cin>>d;
   	cout << "Masukkan bilangan kelima: ";
   	cin>>e;

   	if (a>b && a>c && a>d && a>e)
	{
	cout << "Nilai terbesar adalah "<<a;
	cout<<endl;
	}
  	
	if (b>a && b>c && b>d && b>e)
  	{
  	cout << "Nilai terbesar adalah "<<b;
    cout<<endl;
  	}
  	
 	if (c>a && c>b && c>d && c>e)
	{
	cout << "Nilai terbesar adalah "<<c;
    cout<<endl;
	}
	
	if (d>a && d>b && d>c && d>e)
	{
	cout << "Nilai terbesar adalah "<<d;
   	cout<<endl;
	}
	
   	if (e>a && e>b && e>c && e>d)
	{
	cout << "Nilai terbesar adalah "<<e;
  	cout<<endl;
	}

		if (a<b && a<c && a<d && a<e)
		{
		cout << "Nilai terkecil adalah "<<a;
		cout<<endl;
		}
		
		if (b<a && b<c && b<d && b<e)
		{
		cout << "Nilai terkecil adalah "<<b;
		cout<<endl;
		}
		
		if (c<a && c<b && c<d && c<e)
		{
		cout << "Nilai terkecil adalah "<<c;
		cout<<endl;
		}
		
		if (d<a && d<b && d<c && d<e)
		{
		cout << "Nilai terkecil adalah "<<d;
		cout<<endl;
		}
	
		if (e<a && e<b && e<c && e<d)
		{
		cout << "Nilai terkecil adalah "<<e;
		cout<<endl;
		}

	if (a>b && a>c && a>d && a>e)
	{
	max = a;
	}
		else if (b>a && b>c && b>d && b>e)
		{
		max = b;
		}
		
		else if (c>a && c>b && c>d && c>e)
		{
		max = c;
		}
		
		else if (d>a && d>b && d>c && d>e)
		{
		max = d;
		}
		
		else if (e>a && e>b && e>c && e>d)
		{
		max = e;
		}

	if (a<b && a<c && a<d && a<e)
	{
	min = a;
	}
		else if (b<a && b<c && b<d && b<e)
		{
		min = b;
		}
		
		else if (c<a && c<b && c<d && c<e)
		{
		min = c;
		}
		
		else if (d<a && d<b && d<c && d>e)
		{
		min = d;
		}
		
		else if (e<a && e<b && e<c && e<d)
		{
		min = e;
        }

	cout << "Urutan bilangan: "<<endl;
	for(n=max; n>=min; n--)
	{
		if(n==a)
		{
		cout<<a<<" ";
		}
		
		if(n==b)
		{
		cout<<b<<" ";
		}
		
		if(n==c)
		{
		cout<<c<<" ";
		}
		
		if(n==d)
		{
		cout<<d<<" ";
		}
		
		if(n==e)
		{
		cout<<e<<" ";
		}
	}

getch();
}

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
int a;
int b;

	cout << "Masukkan nilai A= ";
	cin >> a;
	
	cout << "Masukkan nilai B= ";
	cin >> b;
	
	if (a > b)
	{
		cout << a;
	}
	
	if (a < b)
	{
		cout << b;
	}
	
	getch();
	return 0;
}

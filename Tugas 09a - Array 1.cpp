#include <iostream>
#include <conio.h>

using namespace std;

int umur[] = {18, 19, 20, 21, 22};
int n;
int hasil = 0;
	
int main()
{
	for (n = 0; n<5; n++)
	{
	hasil += umur[n];
	}
	
	cout << hasil;
getch();
}

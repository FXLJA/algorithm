#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int i;
int j;
	
	for (i=0; i<=4; i++)
	{
		cout << "1";
		
		for (j=1; j<=i; j++)
		{
			cout << "0";
		}
		
		cout << endl;
	}

getch();
return 0;
}

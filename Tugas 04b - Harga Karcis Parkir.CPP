#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
int jenis;
int total;
int jam_in;
int jam_out;
int durasi;
long mobil1= 100000;
long mobil2= 200000;
long motor1= 200000;
long motor2= 300000;
int sepeda1= 5000;
int sepeda2= 10000;

	cout << "Silakan pilih jenis kendaraan Anda"<<endl;
	cout << "1. Mobil"<<endl;
	cout << "2. Motor"<<endl;
	cout << "3. Sepeda"<<endl;
	cout << "Jenis kendaraan: ";
	cin>>jenis;
	cout<<endl;

   switch (jenis)
   {
		case 1:
   	{
		cout << "Mobil"<<endl;
		cout << "Jam Masuk: ";
		cin>>jam_in;
		cout << "Jam Keluar: ";
		cin>>jam_out;
		durasi= jam_out - jam_in;
		cout << "Lama Parkir: "<<durasi;
      cout<<endl;
		total = mobil1 + mobil2;
			if(durasi<= 2)
			{
			total= mobil1 + 0;
			}
				if(durasi > 2 && durasi <= 12)
				{
            total= mobil1 + (mobil2*(durasi-2));
				}
		cout << "Total Pembayaran: "<<total;
		}
   	break;
			case 2:
         {
				cout << "Motor"<<endl;
				cout << "Jam Masuk: ";
				cin>>jam_in;
				cout << "Jam Keluar: ";
				cin>>jam_out;
				durasi= jam_out - jam_in;
				cout << "Lama Parkir: "<<durasi;
            cout<<endl;
				total = motor1 + motor2;
					if(durasi<= 2)
					{
					total= motor1 + 0;
					}
						if(durasi > 2 && durasi <= 12)
						{
            		total= motor1 + (motor2*(durasi-2));
						}
			cout << "Total Pembayaran: "<<total;
			}
   		break;
         	case 3:
            {
            	cout << "Sepeda"<<endl;
					cout << "Jam Masuk: ";
					cin>>jam_in;
					cout << "Jam Keluar: ";
					cin>>jam_out;
					durasi= jam_out - jam_in;
					cout << "Lama Parkir: "<<durasi;
               cout<<endl;
					total = sepeda1 + sepeda2;
						if(durasi<= 2)
						{
						total= sepeda1 + 0;
						}
							if(durasi > 2 && durasi <= 12)
							{
            			total= sepeda1 + (sepeda2*(durasi-2));
							}
				cout << "Total Pembayaran: "<<total;
				}
   	break;
    }

getch();
}

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()

{
int main_course;
int beverage;
int dessert;
int j_maincourse;
int j_beverage;
int j_dessert;
int H_BM = 10000;
int H_BL = 20000;
int H_BD = 30000;
int H_NA = 15000;
int H_cola = 4000;
int H_fanta = 4000;
int H_sprite = 4000;
int H_tebs = 5000;
int H_SundaeC = 10000;
int H_SundaeS = 10000;
int H_ConeV = 5000;
int H_ConeC = 5000;
long t_maincourse;
long t_beverage;
long t_dessert;
long subtotal;

	cout << "Selamat Datang"<<endl;
	cout<<endl;
		cout << "Main Course:"<<endl;
		cout << "1. Burger Medium			Rp. 10.000"<<endl;
		cout << "2. Burger Large				Rp. 20.000"<<endl;
		cout << "3. Burger Deluxe			Rp. 30.000"<<endl;
		cout << "4. Paket Nasi + Ayam			Rp. 15.000"<<endl;
		cout<<endl;

			cout << "Beverage:"<<endl;
			cout << "1. Coca-cola				Rp. 4.000"<<endl;
			cout << "2. Fanta				Rp. 4.000"<<endl;
			cout << "3. Sprite				Rp. 4.000"<<endl;
			cout << "4. Tebs					Rp. 5.000"<<endl;
			cout<<endl;
			
				cout << "Dessert:"<<endl;
				cout << "1. Sundae cokelat			Rp. 10.000"<<endl;
				cout << "2. Sundae stroberi			Rp. 10.000"<<endl;
				cout << "3. Ice cream cone vanilla		Rp. 5.000"<<endl;
				cout << "4. Ice cream cone cokelat		Rp. 5.000"<<endl;
				cout<<endl;

	cout << "Silakan pilih Main Course Anda: ";
	cin>>main_course;
	switch(main_course)
	{
		case 1:
		{
		cout << "Anda memesan Burger Medium"<<endl;
		cout << "Masukkan jumlah pesanan Anda: ";
		cin>>j_maincourse;
		t_maincourse = j_maincourse * H_BM;
		cout << "Total main course: "<<t_maincourse<<endl;
		cout<<endl;
		break;
		}
			case 2:
			{
			cout << "Anda memesan Burger Large"<<endl;
			cout << "Masukkan jumlah pesanan Anda: ";
			cin>>j_maincourse;
			t_maincourse = j_maincourse * H_BL;
			cout << "Total main course: "<<t_maincourse<<endl;
			cout<<endl;
			break;
			}
				case 3:
				{
				cout << "Anda memesan Burger Deluxe"<<endl;
				cout << "Masukkan jumlah pesanan Anda: ";
				cin>>j_maincourse;
				t_maincourse = j_maincourse * H_BD;
				cout << "Total main course: "<<t_maincourse<<endl;
				cout<<endl;
				break;
				}
					case 4:
					{
					cout << "Anda memesan Paket Nasi + Ayam"<<endl;
					cout << "Masukkan jumlah pesanan Anda: ";
					cin>>j_maincourse;
					cout << "Masukkan jumlah pesanan Anda: ";
					cin>>j_maincourse;
					t_maincourse = j_maincourse * H_NA;
					cout << "Total main course: "<<t_maincourse<<endl;
					cout<<endl;
					break;
					}
						default:
						{
						cout << "Anda tidak memesan Main Course"<<endl;;
						t_maincourse = 0;
						cout << "Total main course: "<<t_maincourse;
						}	
	}//Close scope switch (Main Course)

	cout << "Silakan pilih Beverage Anda: ";
	cin>>beverage;
	switch(beverage)
	{
		case 1:
		{
		cout << "Anda memesan Coca-cola"<<endl;
		cout << "Masukkan jumlah pesanan Anda: ";
		cin>>j_beverage;
		t_beverage = j_beverage * H_cola;
		cout << "Total beverage: "<<t_beverage<<endl;
		cout<<endl;
		break;
		}
			case 2:
			{
			cout << "Anda memesan Fanta"<<endl;
			cout << "Masukkan jumlah pesanan Anda: ";
			cin>>j_beverage;
			t_beverage = j_beverage * H_fanta;
			cout << "Total beverage: "<<t_beverage<<endl;
			cout<<endl;
			break;
			}
				case 3:
				{
				cout << "Anda memesan Sprite"<<endl;
				cout << "Masukkan jumlah pesanan Anda: ";
				cin>>j_beverage;
				t_beverage = j_beverage * H_sprite;
				cout << "Total beverage: "<<t_beverage<<endl;
				cout<<endl;
				break;
				}
					case 4:
					{
					cout << "Anda memesan Tebs"<<endl;
					cout << "Masukkan jumlah pesanan Anda: ";
					cin>>j_beverage;
					t_beverage = j_beverage * H_tebs;
					cout << "Total beverage: "<<t_beverage<<endl;
					cout<<endl;
					break;
					}
						default:
						{
						cout << "Anda tidak memesan Beverage"<<endl;;
						t_beverage = 0;
						cout << "Total beverage: "<<t_beverage;
						}	
	}//Close scope switch (Beverage)
	
	cout << "Silakan pilih Dessert Anda: ";
	cin>>dessert;
	switch(dessert)
	{
		case 1:
		{
		cout << "Anda memesan Sundae cokelat"<<endl;
		cout << "Masukkan jumlah pesanan Anda: ";
		cin>>j_dessert;
		t_dessert = j_dessert * H_SundaeC;
		cout << "Total dessert: "<<t_dessert<<endl;
		cout<<endl;
		break;
		}
			case 2:
			{
			cout << "Anda memesan Sundae Stroberi"<<endl;
			cout << "Masukkan jumlah pesanan Anda: ";
			cin>>j_dessert;
			t_dessert = j_dessert * H_SundaeS;
			cout << "Total dessert: "<<t_dessert<<endl;
			cout<<endl;
			break;
			}
				case 3:
				{
				cout << "Anda memesan Ice Cream Cone Vanilla"<<endl;
				cout << "Masukkan jumlah pesanan Anda: ";
				cin>>j_dessert;
				t_dessert = j_dessert * H_ConeV;
				cout << "Total dessert: "<<t_dessert<<endl;
				cout<<endl;
				break;
				}
					case 4:
					{
					cout << "Anda memesan Ice Cream Cone Cokelat"<<endl;
					cout << "Masukkan jumlah pesanan Anda: ";
					cin>>j_dessert;
					t_dessert = j_dessert * H_ConeC;
					cout << "Total dessert: "<<t_dessert<<endl;
					cout<<endl;
					break;
					}
						default:
						{
						cout << "Anda tidak memesan Dessert"<<endl;;
						t_dessert = 0;
						cout << "Total dessert: "<<t_beverage;
						}	
	}//Close scope switch (Dessert)
	
	subtotal = t_maincourse + t_beverage + t_dessert;
	cout << "Sub total: "<<subtotal;
	
getch();
return 0;

}

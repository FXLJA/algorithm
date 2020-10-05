/*	Aplikasi Bank Management System
	Isi Program:	if statements
					switch case
					looping statements (do-while)
					prosedur
					file handling
					type casting
					searching fungsi (sequential)
	
	Kapasitas:	User bisa membuat akun
						  mengedit akun
						  mengecek informasi akun 
						  menghapus akun
						  melakukan setoran & tarikan 
*/
						  
#include <iostream>		//cout cin seekp seekg endl
#include <conio.h>		//getch()
#include <cstdlib>		//system("cls")
#include <fstream>		//ifstream ofstream fstream
#include <cctype>		//toupper
#include <iomanip>		//setw

using namespace std;	//std::      

//Deklarasi class dan member class
class account
{
long nomor_akun;
char nama [100];
long deposit;
char tipe;

	public:							//Member class bisa diakses dari fungsi lain
		void create_account();		//Membuat akun, inputan data akun dari user
		void show_account();		//Menampilkan akun, input nomor akun dari user
		void modify();				//Mengedit akun, nomor akun tidak bisa diganti
		void dep(long);				//Setoran
		void draw(long);			//Tarikan
		void report();				//Data seluruh akun dalam file 'account.txt'
		int retacno();				//Nilai balik untuk mencocokkan nomor akun
		int retdeposit();			//Nilai balik untuk mencocokkan balance
};
	
//Deskripsi fungsi dalam class 'account'
//(Sintaks: tipe data fungsi - nama class - ::[operator SCOPE RESOLUTION] - nama fungsi)
void account::create_account()
{
	cout << "\n Masukkan nomor akun: ";
	cin >> nomor_akun;
	cout << "\n Masukkan nama pemilik akun (max 15 karakter termasuk spasi): ";
	cin.ignore();
	cin.getline(nama,100);
	cout << "\n Pilih tipe akun (C/S): ";
	cin >>tipe;
	tipe = toupper(tipe);
	cout << "\n Masukkan setoran awal: ";
	cin >> deposit;
	cout << "\n\n Akun disimpan";
}
	
void account::show_account()
{
	cout << "\n Nomor akun: " << nomor_akun;
	cout << "\n Nama pemilik akun: " << nama;
	cout << "\n Tipe akun: " << tipe;
	cout << "\n Balance: " << deposit;
}

void account::modify()
{
	cout << "\n Nomor akun: " << nomor_akun;
	cout << "\n Nama pemilik yang baru (max 15 karakter termasuk spasi): ";
	cin.ignore();
	cin.getline(nama,100);
	cout << "\n Tipe akun (C/S): ";
	cin >> tipe;
	tipe = toupper(tipe);
	cout << "\n Balance: ";
	cin >> deposit;
}
	
void account::dep(long x)
{
	deposit += x;
}
	
void account::draw(long x)
{
	deposit -= x;
}
	
void account::report()
{
	cout << nomor_akun << "\t\t\t" << nama << "\t\t\t" << setw(5) << tipe << "\t\t\t" << deposit << endl;
}

int account::retacno()
{
	return nomor_akun;
}

int account::retdeposit()
{
	return deposit;
}

/* Deklarasi fungsi efektor
   Fungsi-fungsi ini akan bekerja pada file 'account.txt' dengan memanggil fungsi yang ada pada class account
   ke dalam sebuah objek berupa variabel buatan */
//Fungsi diakses dengan '.' [operator DIRECT ACCESS MEMBER] (Sintaks: objek - . - variabel/fungsi yang ingin dipakai)
void write_account();				
void display_account(long);				
void modify_account(long);			
void delete_account(long);			
void display_all();				
void deposit_withdraw(long, int); 	
void intro();						//Layar depan

//Deskripsi fungsi efektor
//1. write_account
void write_account()
{
	account create;			//Deklarasi objek dengan atribut class 'account' bernama 'create'
	ofstream outFile;		//Deklarasi objek bernama 'outFile' dengan atribut ofstream
	
	outFile.open ("account.txt", ios::app);									//Menulis / membuat file 'account.txt'
	create.create_account();												//Memanggil fungsi create_account
	outFile.write (reinterpret_cast<char*> (&create), sizeof(account));		//Menulis data ke dalam objek. Tipe data di-cast menjadi char dengan alamat memori sesuai objek dan seukuran memori class dalam satuan byte
	
	outFile.close();														//Menutup file 'account.txt'
}

//2. display_account
void display_account (long n) 		//Variabel lokal 'n' digunakan untuk menampung nomor akun inputan user
{
account display;					//Deklarasi objek dengan atribut class 'account' bernama 'display'
ifstream inFile;					//Deklarasi objek bernama 'inFile' dengan atribut ifstream
bool isFound = false;				//Deklarasi variabel bertipe boolean bernama 'isFound', nilai default = false

inFile.open ("account.txt");															//Membuka file 'account.txt'
	
	if (!inFile)																		//Jika file 'account.txt' tidak ada di dalam folder, lakukan yang di dalam scope
	{
		cout << "File hilang atau korup" << endl;
		cout << "Press any key to continue...";
		return;
	}

	cout << "\nINFORMASI AKUN\n";

	while (inFile.read (reinterpret_cast<char*> (&display), sizeof (account))) 			//Selama file sedang dibaca dan di-casting menjadi char dengan alamat memori sesuai objek dan seukuran memori class dalam satuan byte, lakukan yang didalam scope
	{
		if (display.retacno() == n)														//Memanggil fungsi retacno dan mencocokkan dengan inputan user. Apabila nilai if = true, lakukan yang di dalam scope
		{
			display.show_account(); 											 		//Memanggil fungsi show_account
			isFound = true;														 		//isFound di-set ke true untuk mencegah looping
		}
	}
	
inFile.close();																			//Menutup file 'account.txt'
	
	if (isFound == false)																//Jika isFound tetap bernilai false artinya input user terbaca tapi tidak ada register yang cocok dalam file 'account.txt'
	{
		cout << "Nomor akun salah / tidak terdaftar";
	}
}

//3. modify_account
void modify_account (long n)														//Variabel lokal 'n' digunakan untuk menampung nomor akun inputan user
{
account edit;																		//Deklarasi objek dengan atribut class 'account' bernama 'edit'
fstream File;																		//Deklarasi objek bernama 'File' dengan atribut fstream
bool isFound = false;																//Deklarasi variabel bertipe boolean bernama 'isFound', nilai default = false


File.open ("account.txt", ios::in | ios::out);										//Membuka file dengan read attribute dengan ios::in, dan dengan write attribute dengan ios::out

	if (!File)																		//Jika file 'account.txt' tidak ada di dalam folder, lakukan yang di dalam scope
	{
		cout << "File hilang atau korup" << endl;
		cout << "Press any key to continue...";
		return;
	}
	
	while (!File.eof() && isFound == false)											//Selama file belum sampai pada titik EOF & nilai boolean isFound masih = false, lakukan yang di dalam scope
	{
		File.read (reinterpret_cast<char*> (&edit), sizeof(account));				//Tipe data di-cast menjadi char dengan alamat memori sesuai objek dan seukuran memori class dalam satuan byte
			if (edit.retacno() == n)												//Memanggil fungsi retacno dan mencocokkan dengan inputan user. Jika hasil if = true, lakukan yang di dalam scope
			{
				edit.show_account();												//Memanggil fungsi show_account
				cout << endl;												
				cout << "\n Silakan masukkan informasi baru akun Anda" << endl;		
				edit.modify();														//Memanggil fungsi modify
				int pos = (-1) *static_cast<int> (sizeof(account));					//
				File.seekp (pos, ios::cur);											//
				File.write (reinterpret_cast<char*> (&edit), sizeof(account));		//Tipe data di-cast menjadi char dengan alamat memori sesuai objek dan seukuran memori class dalam satuan byte
				cout << "\n\n\t Akun diperbarui";
				isFound = true;														//isFound di-set ke true untuk keluar dari while-loop
			}
	}
	
File.close();																		//Menutup file 'account.txt'
	
	if (isFound == false)															//Jika isFound tetap bernilai false artinya input user terbaca tapi tidak ada register yang cocok dalam file 'account.txt'
	{
		cout << "\n Nomor akun salah / tidak terdaftar";
	}
}

//4. delete_account
void delete_account (long n)																		//Variabel lokal 'n' digunakan untuk menampung nomor akun inputan user
{
account hapus;																						//Deklarasi objek dengan atribut class 'account' bernama 'hapus'
ifstream account_txt;																				//Deklarasi objek bernama 'account_txt dengan atribut ifstream
ofstream temp_txt;																					//Deklarasi objek bernama 'temp_txt' dengan atribut ofstream

	account_txt.open ("account.txt");																//Membuka file 'account.txt'

	if (!account_txt)																				//Jika file 'account.txt' tidak ada di dalam folder, lakukan yang di dalam scope
	{
		cout << "File hilang atau korup" << endl;
		cout << "Press any key to continue...";
		return;
	}
		
	temp_txt.open ("Temp.txt");																		//Menulis / membuat file 'account.txt
	account_txt.seekg (0, ios::beg);																//
	
	while (account_txt.read (reinterpret_cast<char*> (&hapus), sizeof(account)))					//Selama file sedang dibaca dan di-casting menjadi char dengan alamat memori sesuai objek dan seukuran memori class dalam satuan byte, lakukan yang didalam scope
	{
		if (hapus.retacno() != n)																	//Memanggil fungsi retacno dan mencocokkan dengan inputan user. Apabila nilai if = true, lakukan yang di dalam scope
		{
			temp_txt.write (reinterpret_cast<char*> (&hapus), sizeof(account));						//
		}
	}
	
account_txt.close();																				//Menutup file 'account.txt'
temp_txt.close();																					//Menutup file 'Temp.dat'
remove ("account.txt");																				//Menghapus file 'account.txt' yang masih memiliki semua register lengkap
rename ("Temp.txt","account.txt");																	//Me-rename 'Temp.dat' yang merupakan salinan 'account.txt' dengan value register yang sudah dihapus menjadi 'account.txt' yang baru

	cout << "\n\n\t Akun dihapus";
}

//5. display_all
void display_all()
{
account daftar;																										//Deklarasi objek dengan atribut class 'account' bernama 'daftar'
ifstream inFile;																									//Deklarasi objek bernama 'inFile' dengan atribut ifstream
	
	inFile.open ("account.txt");																					//Membuka file 'account.txt'

	if (!inFile)																									//Jika file 'account.txt' tidak ada di dalam folder, lakukan yang di dalam scope
	{
		cout << "File hilang atau korup"<<endl;
		cout << "Press any key to continue...";
		return;
	}
	
	cout << "\n\n\t\t\t\t\t DAFTAR AKUN \n\n";
	cout << "=================================================================================================\n";
	cout << "A/c			            Nama			   Tipe		        Balance\n";
	cout << "=================================================================================================\n";
	
	while (inFile.read (reinterpret_cast<char *> (&daftar), sizeof(account)))										//Selama file sedang dibaca dan di-casting menjadi char dengan alamat memori sesuai objek dan seukuran memori class dalam satuan byte, lakukan yang didalam scope
	{
		daftar.report();																							//Memanggil fungsi report
	}
	
	inFile.close();																									//Menutup file 'account.txt'
}

//6. deposit_withdraw
void deposit_withdraw (long n, int option)											//Variabel lokal 'n' digunakan untuk menampung nomor akun inputan user, variabel lokal 'option' digunakan untuk memilih antara 2 fungsi yang mau digunakan
{
account dw;																			//Deklarasi objek dengan atribut class 'account' bernama 'dw'
fstream File;																		//Deklarasi objek bernama 'File' dengan atribut fstream
int jumlah;																			//Membuat variabel bertipe integer bernama 'jumlah'
bool isFound = false;																//Membuat variabel bertipe boolean bernama 'isFound', nilai default = false

File.open ("account.txt", ios::in | ios::out);										//Membuka file 'account.txt' dengan format binary (non-teks). Manipulasi isi file dimungkinkan dengan ios::in untuk input dan ios::out untuk output dengan file yang sama

	if (!File)																		//Jika file 'account.txt' tidak ada di dalam folder, lakukan yang di dalam scope
	{
		cout << "File hilang atau korup" << endl;
		cout << "Press any key to continue...";
		return;
	}
	
	while (!File.eof() && isFound == false)											//Selama file belum sampai pada titik EOF & nilai boolean isFound masih = false, lakukan yang di dalam scope
	{ //Open while
		File.read (reinterpret_cast<char *> (&dw), sizeof(account));				//Membaca data di dalam objek. Tipe data di-cast menjadi char dengan alamat memori sesuai objek dan seukuran memori class dalam satuan byte
			if (dw.retacno() == n)													//Memanggil fungsi retacno dan mencocokkan dengan inputan user. Jika hasil if = true, lakukan yang di dalam scope
			{ //Open main if
				dw.show_account();													//Memanggil fungsi show_account
				if (option == 1)
				{
					cout << "\n\n\t SETORAN TUNAI";
					cout << "\n\n Masukkan jumlah untuk disetor: ";
					cin >> jumlah;
					dw.dep(jumlah);													//Memanggil fungsi dep-(osit) / setoran
				}
					else if (option == 2)
					{
						cout << "\n\n\t TARIKAN TUNAI";
						cout << "\n\n Masukkan jumlah untuk ditarik: ";
						cin >> jumlah;	
						long bal = dw.retdeposit() - jumlah;
							if (bal < jumlah)
							{
								cout << "Saldo tidak mencukupi";
							}
								else
								{
									dw.draw(jumlah);								//Memanggil fungsi draw / tarikan
								}
					}
				int pos = (-1) *static_cast<int>(sizeof(dw));						//
				File.seekp (pos, ios::cur);											//
				File.write (reinterpret_cast<char*> (&dw), sizeof(account));		//Tipe data di-cast menjadi char dengan alamat memori sesuai objek dan seukuran memori class dalam satuan byte
				cout << "\n\n\t Akun diperbarui";
				isFound = true;														//isFound di-set ke true untuk keluar dari while-loop
		    } //Close main if
	} //Close while

	File.close();																	//Menutup file 'account.txt'
	
	if (isFound == false)
	{
		cout << "\n\n Nomor akun salah / tidak terdaftar";
	}
}

//7. Opening screen
void intro()
{
	cout << "\n\n\n\t\t\t\t\t\t  BANK"
		 << "\n\n\t\t\t\t\t\tMANAGEMENT"
		 << "\n\n\t\t\t\t\t\t SYSTEM"
		 << "\n\n\n\n\t\t\t\t\t\t  MADE BY : "
		 << "\n\t\t\t\t\tSEKELOMPOK MABA KURANG TIDUR"
		 << "\n\t\t\t\t\tKURANG MAKAN DAN KURANG GIZI"
		 << "\n\t\t\t\t\t   KARENA KEBANYAKAN TUGAS"
		 << "\n\n\n\t\t\t\t\t   UNIVERSITAS BUNDA MULIA";

getch();
}

//Main Program
int main()
{
int menu;
long no_akun;

	intro();

	do
	{
		system("cls");
		
		cout << "\n\n\n\t MAIN MENU"
			 << "\n\n\t 01. Buat Akun"
			 << "\n\n\t 02. Setoran Tunai"
			 << "\n\n\t 03. Tarikan Tunai"
			 << "\n\n\t 04. Informasi Akun"
			 << "\n\n\t 05. Daftar Akun"
			 << "\n\n\t 06. Tutup Akun"
			 << "\n\n\t 07. Edit Akun"
			 << "\n\n\t 08. Keluar"
			 << "\n\n\t Pilihan Anda: ";
		cin >> menu;
		
		system("cls");
		
		switch (menu)
		{ //Open switch menu
			case 1:
			{
				write_account();
				break;
			}
			
			case 2:
			{
				cout << "\n Masukkan nomor akun: "; 
				cin >> no_akun;
				deposit_withdraw(no_akun, 1); 		//no_akun untuk mengakses akun & nilai '1' untuk memilih fungsi deposit. Fungsi ada di bawah
				break;
			}
			
			case 3:
			{
				cout << "\n Masukkan nomor akun: "; 
				cin >> no_akun;
				deposit_withdraw(no_akun, 2); 		//no_akun untuk mengakses akun & nilai '2' untuk memilih fungsi withdraw. Fungsi ada di bawah
				break;
			}
			
			case 4:
			{
				cout << "\n Masukkan nomor akun: "; 
				cin >> no_akun;
				display_account(no_akun);
				break;
			}
			
			case 5:
			{
				display_all();
				break;
			}
			
			case 6:
			{
				cout << "\n Masukkan nomor akun: "; 
				cin >> no_akun;
				delete_account(no_akun); 			//Akun akan dihapus sesuai nomor akun yang diinput. Jika tidak cocok, penghapusan batal
				break;
			}
			
			case 7:
			{
				cout << "\n Masukkan nomor akun: "; 	//Akun akan diedit sesuai nomor akun yang diinput. Jika tidak cocok, edit batal
				cin >> no_akun;
				modify_account(no_akun);
				break;
			}
			
			case 8:
			{
				cout << "\n\t Terima kasih";
				break;
		 	}
		 	
			default:
			{
				cout << "\a";
			}
		}
		cin.ignore();
		cin.get();
	} //Close switch menu
	while (menu != 8);

getch();
return 0;
}

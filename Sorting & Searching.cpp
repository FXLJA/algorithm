#include <iostream>
#include <conio.h>
#include <cstdlib>
 
using namespace std;
int a[999];
int b;
int search;
int temp;
bool flag1 = false;
 
void input()
{
    cout<<"Input jumlah bilangan: "; cin>>b;
    for(int i=0; i<b; i++)
    {
        cout<<"Input bilangan ke-"<<(i+1)<<": "; cin>>a[i];
    }
    system("CLS");
    cout<<"Bilangan tersimpan!"<<endl<<endl;
}
 
void bubble()
{
    for(int k=0; k<b; k++)
    {
        for(int j=(b-1); j>0; j--)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    for(int l=0; l<b; l++)
    {
        cout<<a[l]<<" ";
    }
    cout<<endl<<"Press any key to continue..."<<endl<<endl;
    getch();
    system("CLS");
}
 
void selection()
{
    int min, m;
    bool swap;
    for(m=0; m<b; m++)
    {
        swap=false;
        min=m;
        for(int n=(b-1); n>m; n--)
        {
            if(a[min]>a[n])
            {
                min=n;
                swap=true;
            }
        }
        if(swap)
        {
            temp=a[min];
            a[min]=a[m];
            a[m]=temp;
        }
    }
    for(int o=0; o<b; o++)
    {
        cout<<a[o]<<" ";
    }
    cout<<endl<<"Press any key to continue..."<<endl<<endl;
    getch();
    system("CLS");
}
 
void insertion()
{
    int key, pp;
    for(int p=1; p<b; p++)
    {
        key=a[p];
        for(pp=(p-1); pp>=0; pp--)
        {                
            if(key<a[pp])
            {
                a[pp+1]=a[pp];
            }
            else break;
        }
        a[pp+1]=key;
    }
    for(int q=0; q<b; q++)
    {
        cout<<a[q]<<" ";
    }
    cout<<endl<<"Press any key to continue..."<<endl<<endl;
    getch();
    system("CLS");
}
 
void seq()
{
    int find, r=0;
    bool found=false;
    cout<<"Input bilangan yang ingin dicari: "; cin>>find;
    while(r<b)
    {
        if(find==a[r])
        {
            cout<<"Bilangan "<<a[r]<<" ditemukan!"<<endl;
            found=true;
            break;
        }
        r++;
    }
    if(!found)
    {
        cout<<"Bilangan "<<find<<" tidak ditemukan!"<<endl;
    }
    cout<<"Press any key to continue..."<<endl<<endl;
    getch();
    system("CLS");
}
 
void bin()
{
    int find, min=0, max=b, mid, s=b;
    bool found=false;
    cout<<"Input bilangan yang ingin dicari: "; cin>>find;
    while(s!=0)
    {
        mid=(min+max)/2;
        if(find==a[mid])
        {
            cout<<"Bilangan "<<a[mid]<<" ditemukan!"<<endl;
            found=true;
            break;
        }
        else if(find<a[mid])
        {
            max=mid-1;
        }
        else if(find>a[mid])
        {
            min=mid+1;
        }
        s=s/2;
    }
    if(!found)
    {
        cout<<"Bilangan "<<find<<" tidak ditemukan!"<<endl;
    }
    cout<<"Press any key to continue..."<<endl<<endl;
    getch();
    system("CLS");
}
 
int menu_utama()
{
    int menu;
    utama:
    cout<<"Menu: "<<endl;
    cout<<"(1) Input bilangan"<<endl;
    cout<<"(2) Bubble sort"<<endl;
    cout<<"(3) Selection sort"<<endl;
    cout<<"(4) Insertion sort"<<endl;
    cout<<"(5) Sequential search"<<endl;
    cout<<"(6) Binary search (harus sort dulu)"<<endl;
    cout<<"(0) Keluar"<<endl;
 
    A:
    while(true)
    {
        switch((menu=getch()))
        {
            case 48:
            return 0;
           
            case 49:
            input();
            goto utama;
 
            case 50:
            bubble();
            goto utama;
 
            case 51:
            selection();
            goto utama;
 
            case 52:
            insertion();
            goto utama;
 
            case 53:
            seq();
            goto utama;
 
            case 54:
            bin();
            goto utama;
 
            default:
            cout<<"Menu yang dimasukkan salah, coba lagi"<<endl;
            goto A;
        }
    }
}
 
int main()
{
    menu_utama();
    return 0;
}

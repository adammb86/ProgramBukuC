/*
  Program 7.1
  Nama File  : Lat-7.1.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

//prototipe fungsi
void tampil_nama();

void tampil_nama()
{
    int nim;
    char nama[31],alamat[51];
    cout<<"Masukkan NIM     : ";cin>>nim;
    cout<<"Masukkan Nama    : ";fflush(stdin);cin.get(nama,30);
    cout<<"Masukkan Alamat  : ";fflush(stdin);cin.get(alamat,50);
    cout<<endl;
    cout<<"NIM anda         = "<<nim<<endl<<"\a";
    cout<<"Nama anda        = "<<nama<<endl<<"\a";
    cout<<"Alamat anda      = "<<alamat<<endl<<endl<<"\a";
}

int main(int argc, char *argv[])
{
    tampil_nama();         
    system("PAUSE");
    return EXIT_SUCCESS;
}

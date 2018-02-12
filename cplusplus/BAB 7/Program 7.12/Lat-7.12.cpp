/*
  Program 7.12
  Nama File  : Lat-7.12.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int luas(int sisi);
int luas(int panjang,int lebar);

int main(int argc, char *argv[])
{
    int sisi_isi;
    int panjang_isi,lebar_isi;
    cout<<"Masukkan sisi persegi             : ";cin>>sisi_isi;
    cout<<"Masukkan panjang persegi panjang  : ";cin>>panjang_isi;
    cout<<"Masukkan lebar persegi panjang    : ";cin>>lebar_isi;
    cout<<"Luas persegi         = "<<luas(sisi_isi)<<endl;
    cout<<"Luas persegi panjang = "<<luas(panjang_isi,lebar_isi)<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

int luas(int sisi)
{
    int hasil;  
    hasil=sisi*sisi;
    return hasil;
}

int luas(int panjang,int lebar)
{
    int hasil;
    hasil=panjang*lebar;
    return hasil;
}

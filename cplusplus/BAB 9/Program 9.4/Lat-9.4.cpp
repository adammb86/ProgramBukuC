/*
  Program 9.4
  Nama File  : Lat-9.4.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct
{
    int bil1;
    int bil2;
}data_bilangan;

void tampil_bilangan(data_bilangan bilangan)
{
    cout<<"Bilangan pertama = "<<bilangan.bil1<<endl;
    cout<<"Bilangan kedua   = "<<bilangan.bil2<<endl;
}

int main(int argc, char *argv[])
{
    data_bilangan bilangan;
    cout<<"Masukkan bilangan pertama : ";cin>>bilangan.bil1;
    cout<<"Masukkan bilangan kedua   : ";cin>>bilangan.bil2;
    cout<<endl;
    tampil_bilangan(bilangan);
    cout<<endl;		   
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
  Program 9.5
  Nama File  : Lat-9.5.cpp
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

void jumlah_bilangan(data_bilangan *bilangan)
{
    (*bilangan).bil1=(*bilangan).bil1+1;
    (*bilangan).bil2=(*bilangan).bil2+2;
}

int main(int argc, char *argv[])
{
    data_bilangan bilangan;
    cout<<"Masukkan bilangan pertama : ";cin>>bilangan.bil1;
    cout<<"Masukkan bilangan kedua   : ";cin>>bilangan.bil2;
    cout<<endl;
    jumlah_bilangan(&bilangan);
    cout<<"Bilangan pertama ditambah satu = "<<bilangan.bil1<<endl;
    cout<<"Bilangan kedua ditambah dua    = "<<bilangan.bil2<<endl;
    cout<<endl;		   
    system("PAUSE");
    return EXIT_SUCCESS;
}

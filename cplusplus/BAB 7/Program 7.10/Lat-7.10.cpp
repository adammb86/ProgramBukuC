/*
  Program 7.10
  Nama File  : Lat-7.10.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void perkalian_lima(int bil);

int main(int argc, char *argv[])
{
    int bil_isi;
    cout<<"Masukkan bilangan    : ";cin>>bil_isi;
    perkalian_lima(bil_isi);
    cout<<"Bilangan input       : "<<bil_isi<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

void perkalian_lima(int bil)
{
    bil=bil*5;
    cout<<"Hasil perkalian lima : "<<bil<<endl;
}

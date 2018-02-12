/*
  Program 10.11
  Nama File  : Lat-10.11.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

char *nama_barang(char kode_barang[])
{
  if(strcmp(kode_barang,"B001")==0)
     return "Kemeja";
  else
  if(strcmp(kode_barang,"B002")==0)
     return "Kaos";
  else
     return "Jas";
}

int main(int argc, char *argv[])
{
    char kode_barang[6];
    char *nama_brg;
    cout<<"Masukkan kode barang : ";fflush(stdin);cin.get(kode_barang,5);
    strupr(kode_barang);//mencegah error huruf kecil
    nama_brg=nama_barang(kode_barang);
    cout<<"Nama barang          = "<<nama_brg<<endl<<endl;		   
    system("PAUSE");
    return EXIT_SUCCESS;
}

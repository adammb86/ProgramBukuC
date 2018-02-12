/*
  Program 9.1
  Nama File  : Lat-9.1.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct //deklarasi struct
{
    long int nip;
    char nama[31];
    char alamat[51];
}data_dosen;

data_dosen dosen1,dosen2;//deklarasi variabel struct

int main(int argc, char *argv[])
{
    //input           
    cout<<"Data Dosen Pertama\n";
    cout<<"------------------\n";
    cout<<"NIP    : ";cin>>dosen1.nip;
    cout<<"Nama   : ";fflush(stdin);cin.get(dosen1.nama,30);
    cout<<"Alamat : ";fflush(stdin);cin.get(dosen1.alamat,50);
    cout<<endl<<endl;
    cout<<"Data Dosen Kedua\n";
    cout<<"------------------\n";
    cout<<"NIP    : ";cin>>dosen2.nip;
    cout<<"Nama   : ";fflush(stdin);cin.get(dosen2.nama,30);
    cout<<"Alamat : ";fflush(stdin);cin.get(dosen2.alamat,50);
    cout<<endl<<endl;
    //output
    cout<<"Data Dosen Pertama\n";
    cout<<"------------------\n";
    cout<<"NIP    : "<<dosen1.nip<<endl;
    cout<<"Nama   : "<<dosen1.nama<<endl;
    cout<<"Alamat : "<<dosen1.alamat<<endl;
    cout<<endl<<endl;
    cout<<"Data Dosen Kedua\n";
    cout<<"------------------\n";
    cout<<"NIP    : "<<dosen2.nip<<endl;
    cout<<"Nama   : "<<dosen2.nama<<endl;
    cout<<"Alamat : "<<dosen2.alamat<<endl;
    cout<<endl<<endl;		   
    system("PAUSE");
    return EXIT_SUCCESS;
}

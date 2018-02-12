/*
  Program 9.2
  Nama File  : Lat-9.2.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

//struct pertama
typedef struct
{
    int tanggal;
    int bulan;
    int tahun;
}data_tanggal;

//struct dalam struct
typedef struct
{
    long int nip;
    char nama[31];
    char alamat[51];
    data_tanggal tanggal_lahir;  
}data_dosen;

data_dosen dosen;

int main(int argc, char *argv[])
{
    cout<<"NIP    		: ";cin>>dosen.nip;
    cout<<"Nama   		: ";fflush(stdin);cin.get(dosen.nama,30);
    cout<<"Alamat 		: ";fflush(stdin);cin.get(dosen.alamat,50);
    cout<<"Tanggal lahir   : ";cin>>dosen.tanggal_lahir.tanggal;
    cout<<"Bulan lahir     : ";cin>>dosen.tanggal_lahir.bulan;
    cout<<"Tahun lahir     : ";cin>>dosen.tanggal_lahir.tahun;
    cout<<endl<<endl;
    cout<<"NIP    		= "<<dosen.nip<<endl;
    cout<<"Nama   		= "<<dosen.nama<<endl;
    cout<<"Alamat 		= "<<dosen.alamat<<endl;
    cout<<"Tanggal lahir	= "<<dosen.tanggal_lahir.tanggal<<endl;
    cout<<"Bulan lahir	= "<<dosen.tanggal_lahir.bulan<<endl;
    cout<<"Tahun lahir	= "<<dosen.tanggal_lahir.tahun<<endl;
    cout<<endl<<endl;		   
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
  Program 9.3
  Nama File  : Lat-9.3.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

#define maks 100 //maksimal array

using namespace std;

typedef struct
{
  long int nip;
  char nama[31];
  char alamat[51];
}data_dosen;

data_dosen dosen[maks];//array of struct

int main(int argc, char *argv[])
{
    int i,j;  		   
    cout<<"Berapa data dosen? ";cin>>j;
    cout<<endl;
    for(i=0;i<j;i++)
    {
      cout<<"Data dosen ke-"<<i+1<<endl;
    	 cout<<"-----------------"<<endl;
    	 cout<<"NIP    : ";cin>>dosen[i].nip;
    	 cout<<"Nama   : ";fflush(stdin);cin.get(dosen[i].nama,30);
    	 cout<<"Alamat : ";fflush(stdin);cin.get(dosen[i].alamat,50);
    	 cout<<endl<<endl;
    }
    for(i=0;i<j;i++)
    {
    	 cout<<"Data dosen ke-"<<i+1<<endl;
    	 cout<<"-----------------"<<endl;
    	 cout<<"NIP    = "<<dosen[i].nip<<endl;
    	 cout<<"Nama   = "<<dosen[i].nama<<endl;
    	 cout<<"Alamat = "<<dosen[i].alamat<<endl;
    	 cout<<endl<<endl;
    }		   
    system("PAUSE");
    return EXIT_SUCCESS;
}

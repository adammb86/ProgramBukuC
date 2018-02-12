/*
  Program 6.4
  Nama File  : Lat-6.4.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int baris,kolom;
    cout<<"Masukkan jumlah baris : ";cin>>baris;
    while(baris>=1)
    {
         kolom=1;
         while(kolom<=baris)
         {
              cout<<setw(2)<<baris*kolom<<" ";
              kolom++;
         }
         cout<<endl;
         baris--;
    }
    cout<<endl;          
    system("PAUSE");
    return EXIT_SUCCESS;
}

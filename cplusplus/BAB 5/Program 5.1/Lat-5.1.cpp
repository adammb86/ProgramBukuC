/*
  Program 5.1
  Nama File  : Lat-5.1.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int umur;
    cout<<"Masukkan umur anda : ";
    cin>>umur;
    if(umur<17)
         cout<<"Anda tidak diperbolehkan memiliki SIM."<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

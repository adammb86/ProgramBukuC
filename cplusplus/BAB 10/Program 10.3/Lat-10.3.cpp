/*
  Program 10.3
  Nama File  : Lat-10.3.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string1[31];
    char string2[31];
    int k;
    cout<<"Masukkan string: ";fflush(stdin);cin.get(string1,30);
    cout<<"Masukkan jumlah karakter salin: ";cin>>k;
    strcpy(string2,string1);
    cout<<"Hasil penyalinan strcpy  = "<<string2<<endl;
    strncpy(string2,string1,k);
    string2[k]='\0';//menutup string
    cout<<"Hasil penyalinan strncpy = "<<string2<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

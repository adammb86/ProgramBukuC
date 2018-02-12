/*
  Program 10.2
  Nama File  : Lat-10.2.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string[31];
    int panjang;
    cout<<"Masukkan suatu string  : ";fflush(stdin);cin.get(string,30);
    panjang=strlen(string);
    cout<<"String yang dimasukkan = "<<string<<endl;
    cout<<"Panjang string         = "<<panjang<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

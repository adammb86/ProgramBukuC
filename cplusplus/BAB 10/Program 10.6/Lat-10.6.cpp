/*
  Program 10.6
  Nama File  : Lat-10.6.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string[31];
    cout<<"Masukkan string: ";fflush(stdin);cin.get(string,30);
    strlwr(string);
    cout<<"String setelah strlwr= "<<string<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

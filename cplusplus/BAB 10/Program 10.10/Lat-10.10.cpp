/*
  Program 10.10
  Nama File  : Lat-10.10.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char string[]="Saya sedang belajar fungsi string";
    char karakter='A';
    strnset(string,karakter,11);
    cout<<"String setelah strnset  = "<<string<<endl;
    strset(string,karakter);
    cout<<"String setelah strset   = "<<string<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

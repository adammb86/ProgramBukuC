/*
  Program 7.4
  Nama File  : Lat-7.4.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

char *nama();

char *nama()
{
    return "Fungsi string dipanggil!";
}

int main(int argc, char *argv[])
{
    cout<<nama()<<endl<<endl;         
    system("PAUSE");
    return EXIT_SUCCESS;
}

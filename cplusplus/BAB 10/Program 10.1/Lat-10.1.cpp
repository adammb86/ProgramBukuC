/*
  Program 10.1
  Nama File  : Lat-10.1.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char nama1[31];
    char *nama2="Adam MB";
    cout<<"Masukkan nama pertama: ";fflush(stdin);cin.get(nama1,30);
    cout<<"Nama pertama         = "<<nama1<<endl;
    cout<<"Nama kedua           = "<<nama2<<endl<<endl;		   
    system("PAUSE");
    return EXIT_SUCCESS;
}

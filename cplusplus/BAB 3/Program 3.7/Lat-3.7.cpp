/*
  Program 3.7
  Nama File  : Lat-3.7.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char nama[31];
    char pekerjaan[21];
    cout<<"Nama       : ";cin.get(nama,30);
    cout<<"Pekerjaan  : ";cin>>pekerjaan;
    cout<<"\nData yang telah dimasukan adalah : \n\n";
    cout<<"Nama       : "<<nama<<endl;
    cout<<"Pekerjaan  : "<<pekerjaan<<"\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

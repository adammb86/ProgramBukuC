/*
  Program 6.9
  Nama File  : Lat-6.9.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    i=0;
    awal:
       i=i+1;
       cout<<i<<endl;
       if(i<10)
            goto awal;
       else
            goto akhir;
       cout<<"Perintah ini tak akan dieksekusi"<<endl;
       cout<<"Perintah ini juga tak akan dieksekusi"<<endl;
       
    akhir:
       cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

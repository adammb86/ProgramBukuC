/*
  Program 7.5
  Nama File  : Lat-7.5.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

float luas_lingkaran();

float luas_lingkaran()
{
    return(3.14*10*10);//jari2 = 10
}

int main(int argc, char *argv[])
{
    cout<<luas_lingkaran()<<endl<<endl;         
    system("PAUSE");
    return EXIT_SUCCESS;
}

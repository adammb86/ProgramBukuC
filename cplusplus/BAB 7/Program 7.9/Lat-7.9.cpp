/*
  Program 7.9
  Nama File  : Lat-7.9.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float akar_pangkat(int bil);

float akar_pangkat(int bil)//bil di sini parameter formal
{
    return (sqrt(bil));
}

int main(int argc, char *argv[])
{
    int bil;           
    cout<<"Masukkan bilangan : ";cin>>bil;
    cout<<setiosflags(ios::fixed);
    cout<<"Akar pangkat dua  = "<<setprecision(2)<<akar_pangkat(bil)<<endl<<endl;//bil di sini parameter aktual         
    system("PAUSE");
    return EXIT_SUCCESS;
}

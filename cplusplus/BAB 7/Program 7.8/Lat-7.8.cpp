/*
  Program 7.8
  Nama File  : Lat-7.8.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void pangkat_dua(float *bil);

void pangkat_dua(float *bil)
{
    *bil=pow(*bil,2);
}

int main(int argc, char *argv[])
{
    float bilangan;
    cout<<"Masukkan bilangan : ";cin>>bilangan;
    pangkat_dua(&bilangan);
    cout<<setiosflags(ios::fixed);
    cout<<"pangkat dua       = "<<setprecision(0)<<bilangan<<endl<<endl;         
    system("PAUSE");
    return EXIT_SUCCESS;
}

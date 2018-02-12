/*
  Program 3.10
  Nama File  : Lat-3.10.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void contoh_biasa()
{
     int x=0;
     x=x+1;
     cout<<"x biasa  = "<<x<<endl;
}

void contoh_statis()
{
     static int x=0;
     x=x+1;
     cout<<"x statis = "<<x<<endl;
}

int main(int argc, char *argv[])
{
    contoh_biasa();
    contoh_biasa();
    contoh_biasa();
    cout<<"\n\n";
    contoh_statis();
    contoh_statis();
    contoh_statis();
    cout<<"\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

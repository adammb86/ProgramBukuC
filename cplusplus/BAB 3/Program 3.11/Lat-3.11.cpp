/*
  Program 3.11
  Nama File  : Lat-3.11.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x=10;
    int y=100;
    cout<<"x awal                : "<<x<<"\n\n";
    x++;
    cout<<"x++ di luar cout      : "<<x<<"\n";
    cout<<"x                     : "<<x<<"\n\n";
    cout<<"x++ di dalam cout     : "<<x++<<"\n";
    cout<<"x                     : "<<x<<"\n\n";
    ++x;
    cout<<"++x di luar cout      : "<<x<<"\n";
    cout<<"x                     : "<<x<<"\n\n";
    cout<<"++x di dalam cout     : "<<++x<<"\n";
    cout<<"x terakhir            : "<<x<<"\n\n\n"; 
    cout<<"y awal                : "<<y<<"\n\n";
    y--; 
    cout<<"y-- di luar cout      : "<<y<<"\n";
    cout<<"y                     : "<<y<<"\n\n";
    cout<<"y-- di dalam cout     : "<<y--<<"\n";
    cout<<"y                     : "<<y<<"\n\n";
    --y;
    cout<<"++y di luar cout      : "<<y<<"\n";
    cout<<"y                     : "<<y<<"\n\n";
    cout<<"--y di dalam cout     : "<<--y<<"\n";
    cout<<"y terakhir            : "<<y<<"\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
  Program 8.5
  Nama File  : Lat-8.5.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    float nilai[10];
    int x,y;
    cout<<"Mau berapa data [1..10]: ";cin>>y;
    for(x=0;x<y;x++)
    {
        cout<<"Nilai ke-"<<x+1<<" : ";cin>>nilai[x];
    }
    cout<<endl;
    cout<<setiosflags(ios::fixed);
    for(x=0;x<y;x++)
    {
        cout<<"Nilai ke-"<<setprecision(2)<<x+1<<" : "<<nilai[x]<<endl;
    }
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

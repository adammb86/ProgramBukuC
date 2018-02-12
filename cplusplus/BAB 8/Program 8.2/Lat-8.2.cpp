/*
  Program 8.2
  Nama File  : Lat-8.2.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x[5],i;
    for(i=0;i<=4;i++)
    {
        cout<<"Masukkan nilai "<<i+1<<" : ";cin>>x[i];
    }
    cout<<endl;
    for(i=0;i<=4;i++)
    {
        cout<<"Nilai ke-"<<i+1<<"       = "<<x[i]<<endl;
    }
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
} 

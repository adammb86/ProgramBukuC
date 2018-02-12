/*
  Program 8.8
  Nama File  : Lat-8.8.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char hari[7][10];
    int i;
    for(i=0;i<7;i++)
    {
      cout<<"Hari ke-"<<i+1<<" : ";cin>>hari[i];
    }
    cout<<endl;
    for(i=0;i<7;i++)
    {
      cout<<"Hari ke-"<<i+1<<" : "<<hari[i]<<endl;
    }
    cout<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

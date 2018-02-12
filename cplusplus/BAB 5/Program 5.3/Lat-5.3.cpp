/*
  Program 5.3
  Nama File  : Lat-5.3.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int bil;
    cout<<"Masukkan bilangan bulat: ";
    cin>>bil;
    if(bil>=0)
    {
         cout<<"\nBilangan yang dimasukkan adalah "<<bil<<endl;
         cout<<"Bilangan ini adalah bilangan positif"<<endl<<endl;
    }
    else
    {
         cout<<"\nBilangan yang dimasukkan adalah "<<bil<<endl;
         cout<<"Bilangan ini adalah bilangan negatif"<<endl<<endl;
    }     
    system("PAUSE");
    return EXIT_SUCCESS;
}

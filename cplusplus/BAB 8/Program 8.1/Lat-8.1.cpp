/*
  Program 8.1
  Nama File  : Lat-8.1.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x[5];
    cout<<"Masukkan nilai 1 : ";cin>>x[0];
    cout<<"Masukkan nilai 2 : ";cin>>x[1];
    cout<<"Masukkan nilai 3 : ";cin>>x[2];
    cout<<"Masukkan nilai 4 : ";cin>>x[3];
    cout<<"Masukkan nilai 5 : ";cin>>x[4];
    cout<<endl;
    cout<<"Nilai ke-1       = "<<x[0]<<endl;
    cout<<"Nilai ke-2       = "<<x[1]<<endl;
    cout<<"Nilai ke-3       = "<<x[2]<<endl;
    cout<<"Nilai ke-4       = "<<x[3]<<endl;
    cout<<"Nilai ke-5       = "<<x[4]<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

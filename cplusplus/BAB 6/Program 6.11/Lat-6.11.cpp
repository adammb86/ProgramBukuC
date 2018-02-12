/*
  Program 6.11
  Nama File  : Lat-6.11.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i,j;
    cout<<"Masukkan banyak pengulangan : ";cin>>j;
    for(i=1;i<=j;i++)
    {
       cout<<i<<endl;
       if(i==(j-3))
            break;
    }
    cout<<endl;
    cout<<"i terakhir (break=banyak-3) = "<<i<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

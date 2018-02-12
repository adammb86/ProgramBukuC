/*
  Program 7.7
  Nama File  : Lat-7.7.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void jumlah_deret(int batas, int *jumlah);

void jumlah_deret(int batas,int *jumlah)
{ 
    int x;   
    *jumlah=0;
    for(x=1;x<=batas;x++)
    {    
         *jumlah=*jumlah+x;
    }
}

int main(int argc, char *argv[])
{
    int batas,jumlah;
    cout<<"Masukkan batas deret  : ";cin>>batas;
    jumlah_deret(batas,&jumlah);
    cout<<endl;
    cout<<"Jumlah Deret          = "<<jumlah<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

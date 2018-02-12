/*
  Program 6.7
  Nama File  : Lat-6.7.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <conio.h>

#define pass 1234
using namespace std;

int main(int argc, char *argv[])
{
    int password,i;
    i=0;
    do
    {
        cout<<"Masukkan password yang benar : ";cin>>password;
        if(password==pass)
             cout<<"Password anda benar!"<<endl;
        else
        {
             cout<<"Password anda salah"<<endl;
             getch();
             system("cls");
        }
        i++;
    }while((password!=pass)&&(i!=3));
    system("PAUSE");
    return EXIT_SUCCESS;
}

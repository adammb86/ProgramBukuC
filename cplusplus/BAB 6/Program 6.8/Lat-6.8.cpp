/*
  Program 6.8
  Nama File  : Lat-6.8.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <conio2.h>

#define pass 1234
using namespace std;

int main(int argc, char *argv[])
{
    int password,i;
    i=1;
    cout<<"Masukkan password yang benar : ";cin>>password;
    while((password!=pass)&&(i!=3))
    {
         cout<<"Password anda salah!"<<endl<<endl;
         getch();
         gotoxy(1,2);clreol();//menghapus satu baris dimulai dari pointer
         gotoxy(32,1);clreol();
         scanf("%i",&password);
         i++;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}

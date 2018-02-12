/*
  Program 5.4
  Nama File  : Lat-5.4.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <conio2.h>

using namespace std;

int main(int argc, char *argv[])
{
    int pilihan;
    textbackground(WHITE);
    clrscr();
    textcolor(BLACK);cout<<"Pilihan Warna Lampu Lalu Lintas"<<endl;
    cout<<"-------------------------------"<<endl;
    textcolor(LIGHTRED);cout<<"1. Merah"<<endl;
    textcolor(YELLOW);cout<<"2. Kuning"<<endl;
    textcolor(LIGHTGREEN);cout<<"3. Hijau"<<endl;
    textcolor(BLACK);cout<<"-------------------------------"<<endl<<endl;
    textcolor(BLACK);
    cout<<"Masukkan pilihan anda [1..3]: ";cin>>pilihan;
    cout<<endl;
    if(pilihan==1)
    {
         textcolor(LIGHTRED);
         cout<<"Lampu merah artinya tidak boleh jalan!";
    } 
    else 
    if(pilihan==2)
    {
         textcolor(YELLOW);         
         cout<<"Lampu kuning artinya siap-siap!";
    }
    else 
    if(pilihan==3)
    {
         textcolor(LIGHTGREEN);         
         cout<<"Lampu hijau artinya boleh jalan!";
    }
    else
         cout<<"Pilihan yang dimasukkan salah!";
    cout<<endl<<endl;
    textcolor(BLACK);
    system("PAUSE");
    return EXIT_SUCCESS;
}

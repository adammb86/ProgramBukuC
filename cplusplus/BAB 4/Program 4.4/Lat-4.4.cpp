/*
  Program 4.4
  Nama File  : Lat-4.4.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <conio2.h> //file header tambahan

using namespace std;

int main(int argc, char *argv[])
{
    textbackground(WHITE);//memberi background pada teks dan layar 
    clrscr(); //pengganti system("cls");
    textcolor(GREEN); //warna harus dalam huruf besar
    cout<<"Tulisan ini akan berwarna hijau tua"<<endl;
    textcolor(LIGHTBLUE);//tidak semua warna bisa
    cout<<"Tulisan ini akan berwarna biru terang"<<endl;
    textcolor(RED);
    cout<<"Tulisan ini akan berwarna merah\n";
    textcolor(10); //bisa diganti dengan angka karena parameter fungsi ini bertipe integer
    textbackground(BLACK);
    printf("Tulisan ini akan berwarna hijau muda dan berlatar hitam\n\n");
    textcolor(BLACK);
    textbackground(WHITE);
    gotoxy(25,10); //mengatur letak dengan aturan gotoxy(kolom,baris)
    system("PAUSE");
    return EXIT_SUCCESS;
}

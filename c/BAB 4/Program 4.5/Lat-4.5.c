/*
  Program 4.5
  Nama File  : Lat-4.5.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h> //file header tambahan

int main(int argc, char *argv[])
{
  textbackground(WHITE);//memberi background pada teks dan layar 
  clrscr(); //pengganti system("cls");
  textcolor(GREEN); //warna harus dalam huruf besar
  printf("Tulisan ini akan berwarna hijau tua\n");
  textcolor(LIGHTBLUE);//tidak semua warna bisa
  printf("Tulisan ini akan berwarna biru terang\n");
  textcolor(RED);
  printf("Tulisan ini akan berwarna merah\n");
  textcolor(10); //bisa diganti dengan angka karena parameter fungsi ini bertipe integer
  textbackground(BLACK);
  printf("Tulisan ini akan berwarna hijau muda dan berlatar hitam\n\n");
  textcolor(BLACK);
  textbackground(WHITE);
  gotoxy(25,10); //mengatur letak dengan aturan gotoxy(kolom,baris)
  system("PAUSE");	
  return 0;
}

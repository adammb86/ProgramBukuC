/*
  Program 5.4
  Nama File  : Lat-5.4.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main(int argc, char *argv[])
{
  int pilihan;
  textbackground(WHITE);
  clrscr();
  textcolor(BLACK);printf("Pilihan Warna Lampu Lalu Lintas\n");
  printf("-------------------------------\n");
  textcolor(LIGHTRED);printf("1. Merah\n");
  textcolor(YELLOW);printf("2. Kuning\n");
  textcolor(LIGHTGREEN);printf("3. Hijau\n");
  textcolor(BLACK);printf("-------------------------------\n\n");
  textcolor(BLACK);
  printf("Masukkan pilihan anda [1..3]: ");scanf("%i",&pilihan);
  printf("\n");
  if(pilihan==1)
  {
       textcolor(LIGHTRED);
       printf("Lampu merah artinya tidak boleh jalan!");
  } 
  else 
  if(pilihan==2)
  {
       textcolor(YELLOW);         
       printf("Lampu kuning artinya siap-siap!");
  }
  else 
  if(pilihan==3)
  {
       textcolor(LIGHTGREEN);         
       printf("Lampu hijau artinya boleh jalan!");
  }
  else
       printf("Pilihan yang dimasukkan salah!");
  printf("\n\n");
  textcolor(BLACK);
  system("PAUSE");	
  return 0;
}

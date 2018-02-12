/*
  Program 6.8
  Nama File  : Lat-6.8.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

#define pass 1234
int main(int argc, char *argv[])
{
  int password,i;
  i=1;
  printf("Masukkan password yang benar : ");scanf("%i",&password);
  while((password!=pass)&&(i!=3))
  {
      printf("Password anda salah!\n\n");
      getch();
      gotoxy(1,2);clreol();//menghapus satu baris dimulai dari pointer
      gotoxy(32,1);clreol();
      scanf("%i",&password);
      i++;
  }
  system("PAUSE");	
  return 0;
}

/*
  Program 7.1
  Nama File  : Lat-7.1.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

//prototipe fungsi
void tampil_nama();

void tampil_nama()
{
  int nim;
  char nama[31],alamat[51];
  printf("Masukkan NIM     : ");scanf("%i",&nim);
  printf("Masukkan Nama    : ");fflush(stdin);gets(nama);
  printf("Masukkan Alamat  : ");fflush(stdin);gets(alamat);
  printf("\n");
  printf("NIM anda         = %i\n\a",nim);
  printf("Nama anda        = %s\n\a",nama);
  printf("Alamat anda      = %s\n\n\a",alamat);
}

int main(int argc, char *argv[])
{
  tampil_nama();
  system("PAUSE");	
  return 0;
}

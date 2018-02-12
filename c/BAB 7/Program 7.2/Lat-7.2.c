/*
  Program 7.2
  Nama File  : Lat-7.2.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

//prototipe fungsi
void tampil_nama(int nim,char nama[31],char alamat[51]);

void tampil_nama(int nim,char nama[31],char alamat[51])
{
  printf("NIM anda         = %i\n\a",nim);
  printf("Nama anda        = %s\n\a",nama);
  printf("Alamat anda      = %s\n\n\a",alamat);
}

int main(int argc, char *argv[])
{
  int nim_isi;
  char nama_isi[31],alamat_isi[51];
  printf("Masukkan NIM     : ");scanf("%i",&nim_isi);
  printf("Masukkan Nama    : ");fflush(stdin);gets(nama_isi);
  printf("Masukkan Alamat  : ");fflush(stdin);gets(alamat_isi);
  printf("\n");
  tampil_nama(nim_isi,nama_isi,alamat_isi);
  system("PAUSE");	
  return 0;
}

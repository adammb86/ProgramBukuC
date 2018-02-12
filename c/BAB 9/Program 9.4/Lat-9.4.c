/*
  Program 9.4
  Nama File  : Lat-9.4.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int bil1;
  int bil2;
}data_bilangan;

void tampil_bilangan(data_bilangan bilangan)
{
  printf("Bilangan pertama = %i\n",bilangan.bil1);
  printf("Bilangan kedua   = %i\n",bilangan.bil2);
}

int main(int argc, char *argv[])
{
  data_bilangan bilangan;
  printf("Masukkan bilangan pertama : ");scanf("%i",&bilangan.bil1);
  printf("Masukkan bilangan kedua   : ");scanf("%i",&bilangan.bil2);
  printf("\n");
  tampil_bilangan(bilangan);
  printf("\n");
  system("PAUSE");	
  return 0;
}

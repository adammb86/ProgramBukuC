/*
  Program 7.11
  Nama File  : Lat-7.11.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

void perkalian_lima(int *bil);

int main(int argc, char *argv[])
{
  int bil_isi;
  printf("Masukkan bilangan    : ");scanf("%i",&bil_isi);
  perkalian_lima(&bil_isi);
  printf("Bilangan input       : %i\n\n",bil_isi);
  system("PAUSE");	
  return 0;
}

void perkalian_lima(int *bil)
{
  *bil=(*bil)*5;
  printf("Hasil perkalian lima : %i\n",*bil);
}

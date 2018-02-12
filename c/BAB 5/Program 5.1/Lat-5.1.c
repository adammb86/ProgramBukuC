/*
  Program 5.1
  Nama File  : Lat-5.1.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int umur;
  printf("Masukkan umur anda : ");scanf("%i",&umur);
  if(umur<17)
       printf("Anda tidak diperbolehkan memiliki SIM.\n\n");
  system("PAUSE");	
  return 0;
}

/*
  Program 10.2
  Nama File  : Lat-10.2.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[31];
  int panjang;
  printf("Masukkan suatu string  : ");fflush(stdin);gets(string);
  panjang=strlen(string);
  printf("String yang dimasukkan = %s\n",string);
  printf("Panjang string         = %i\n\n",panjang);
  system("PAUSE");	
  return 0;
}

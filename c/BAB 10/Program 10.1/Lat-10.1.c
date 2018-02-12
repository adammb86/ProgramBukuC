/*
  Program 10.1
  Nama File  : Lat-10.1.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nama1[31];
  char *nama2="Adam MB";
  printf("Masukkan nama pertama: ");fflush(stdin);gets(nama1);
  printf("Nama pertama         = %s\n",nama1);
  printf("Nama kedua           = %s\n\n",nama2);
  system("PAUSE");	
  return 0;
}

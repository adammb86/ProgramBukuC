/*
  Program 7.4
  Nama File  : Lat-7.4.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

char *nama();

char *nama()
{
   return "Fungsi string dipanggil!";
}

int main(int argc, char *argv[])
{
  printf("%s\n\n",nama());
  system("PAUSE");	
  return 0;
}

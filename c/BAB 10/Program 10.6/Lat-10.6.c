/*
  Program 10.6
  Nama File  : Lat-10.6.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[31];
  printf("Masukkan string: ");fflush(stdin);gets(string);
  strlwr(string);
  printf("String setelah strlwr= %s\n\n",string);
  system("PAUSE");	
  return 0;
}

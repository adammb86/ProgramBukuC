/*
  Program 10.7
  Nama File  : Lat-10.7.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[31];
  printf("Masukkan string: ");fflush(stdin);gets(string);
  strupr(string);
  printf("String setelah strupr= %s\n\n",string);
  system("PAUSE");	
  return 0;
}

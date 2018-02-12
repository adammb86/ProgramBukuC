/*
  Program 10.8
  Nama File  : Lat-10.8.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[31];
  char substring[15];
  char *pstring;
  printf("Masukkan string    : ");fflush(stdin);gets(string);
  printf("Masukkan substring : ");fflush(stdin);gets(substring);
  pstring=strstr(string,substring);
  printf("Sub string         = %s\n",pstring);
  printf("Posisi sub string  = %i\n\n",(pstring-string)+1);
  system("PAUSE");	
  return 0;
}

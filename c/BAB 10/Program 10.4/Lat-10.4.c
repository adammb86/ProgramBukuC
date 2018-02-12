/*
  Program 10.4
  Nama File  : Lat-10.4.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string1[]="Kita sedang belajar";
  char string2[]=" fungsi string bersama!";
  char string3[50];
  strcpy(string3,string1);
  printf("Hasil penggabungan strcat  = %s\n",strcat(string3,string2));
  printf("Hasil penggabungan strncat = %s\n\n",strncat(string1,string2,14));
  system("PAUSE");	
  return 0;
}

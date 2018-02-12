/*
  Program 4.2
  Nama File  : Lat-4.2.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char k1,k2;
  printf("Masukkan karakter pertama : ");
  k1=getch();printf("\n");
  printf("Masukkan karakter kedua   : ");
  k2=getche();printf("\n");
  printf("Karakter yang dimasukkan adalah %c dan %c\n\n",k1,k2);
  system("PAUSE");	
  return 0;
}

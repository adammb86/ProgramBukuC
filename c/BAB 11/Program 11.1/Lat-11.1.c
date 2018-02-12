/*
  Program 11.1
  Nama File  : Lat-11.1.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x=5;
  float y=10.5;
  printf("Isi variabel x    : %i\n",x);
  printf("Alamat variabel x : 0x%p\n\n",&x);
  printf("Isi variabel y    : %f\n",y);
  printf("Alamat variabel y : 0x%p\n\n",&y);
  system("PAUSE");	
  return 0;
}

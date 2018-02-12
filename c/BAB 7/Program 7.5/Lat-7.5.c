/*
  Program 7.5
  Nama File  : Lat-7.5.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

float luas_lingkaran();

float luas_lingkaran()
{
  return(3.14*10*10);//jari2 = 10
}

int main(int argc, char *argv[])
{
  printf("%f\n\n",luas_lingkaran());
  system("PAUSE");	
  return 0;
}

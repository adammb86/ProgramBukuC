/*
  Program 7.8
  Nama File  : Lat-7.8.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pangkat_dua(float *bil);

void pangkat_dua(float *bil)
{
  *bil=pow(*bil,2);
}
int main(int argc, char *argv[])
{
  float bilangan;
  printf("Masukkan bilangan : ");scanf("%f",&bilangan);
  pangkat_dua(&bilangan);
  printf("pangkat dua       = %.0f\n\n",bilangan);
  system("PAUSE");	
  return 0;
}

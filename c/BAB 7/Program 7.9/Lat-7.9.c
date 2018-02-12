/*
  Program 7.9
  Nama File  : Lat-7.9.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float akar_pangkat(int bil);

float akar_pangkat(int bil)//bil di sini parameter formal
{
  return (sqrt(bil));
}

int main(int argc, char *argv[])
{
  int bil;           
  printf("Masukkan bilangan : ");scanf("%i",&bil);
  printf("Akar kuadrat dua  = %.2f\n\n",akar_pangkat(bil));//bil di sini parameter aktual
  system("PAUSE");	
  return 0;
}

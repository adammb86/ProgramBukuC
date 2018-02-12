/*
  Program 7.6
  Nama File  : Lat-7.6.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

float kecepatan(float s, float t);

float kecepatan(float s, float t)
{
  float v;
  v=s/t;
  return v;
}

int main(int argc, char *argv[])
{
  float s_isi,t_isi,v;
  printf("Masukkan jarak (KM) : ");scanf("%f",&s_isi);
  printf("Masukkan waktu (S)  : ");scanf("%f",&t_isi);
  v=kecepatan(s_isi,t_isi);
  printf("\nKecepatan           = %.2f KM/Jam\n\n",v);
  system("PAUSE");	
  return 0;
}

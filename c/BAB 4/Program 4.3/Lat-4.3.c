/*
  Program 4.3
  Nama File  : Lat-4.3.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x=25000;
  unsigned int y=5000;
  float z=12345.678;
  char univ[35]="UNIVERSITAS KOMPUTER INDONESIA";
  char kota[10]="BANDUNG";
  system("cls"); //untuk mengosongkan layar
  printf("Tampilan Data Tanpa Diformat\n");
  printf("Nilai x : %d\n",x);
  printf("Nilai y : %u\n",y);
  printf("Nilai z : %f\n",z);
  printf("String  : %s %s\n\n",univ,kota);
  printf("Tampilan Data Sudah Diformat\n");
  printf("Nilai x : %8d\n",x);
  printf("Nilai y : %8u\n",y);
  printf("Nilai z : %11.2f\n",z);
  printf("String 1: %40s %10s\n",univ,kota);//rata kanan
  printf("String 2: %-40s %-10s\n\n",univ,kota);//rata kiri
  system("PAUSE");	
  return 0;
}

/*
  Program 4.4
  Nama File  : Lat-4.4.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int jam_lembur;
  long int gaji_pokok=1000000,gaji_kotor,total_gaji_lembur;
  float pajak,gaji_bersih;
  char nama[31];
  system("cls");
  printf("Nama Pegawai    : ");fflush(stdin);gets(nama);
  printf("Lama Lembur     : ");scanf("%i",&jam_lembur);
  total_gaji_lembur=(long int)5000*jam_lembur; //konversi tipe data
  gaji_kotor=gaji_pokok+total_gaji_lembur;
  pajak=0.1*gaji_kotor;
  gaji_bersih=gaji_kotor-pajak;
  system("cls");
  printf("Hasil Perhitungan\n");
  printf("Nama Pegawai          : %s\n",nama);
  printf("Gaji Pokok            : Rp. %10li\n",gaji_pokok);
  printf("Lama Lembur           : %i jam\n",jam_lembur);
  printf("Total Gaji Lembur     : Rp. %10li\n",total_gaji_lembur);
  printf("Gaji Kotor            : Rp. %10li\n",gaji_kotor);
  printf("Pajak (10%%)           : Rp. %10.0f\n",pajak);
  printf("Gaji Bersih           : Rp. %10.0f\n\n",gaji_bersih);
  system("PAUSE");	
  return 0;
}

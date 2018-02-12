/*
  Program 9.1
  Nama File  : Lat-9.1.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct //deklarasi struct
{
  long int nip;
  char nama[31];
  char alamat[51];
}data_dosen;

data_dosen dosen1,dosen2;//deklarasi variabel struct

int main(int argc, char *argv[])
{
  //input           
  printf("Data Dosen Pertama\n");
  printf("------------------\n");
  printf("NIP    : ");scanf("%li",&dosen1.nip);
  printf("Nama   : ");fflush(stdin);gets(dosen1.nama);
  printf("Alamat : ");fflush(stdin);gets(dosen1.alamat);
  printf("\n\n");
  printf("Data Dosen Kedua\n");
  printf("------------------\n");
  printf("NIP    : ");scanf("%li",&dosen2.nip);
  printf("Nama   : ");fflush(stdin);gets(dosen2.nama);
  printf("Alamat : ");fflush(stdin);gets(dosen2.alamat);
  printf("\n\n");
  //output
  printf("Data Dosen Pertama\n");
  printf("------------------\n");
  printf("NIP    : %li\n",dosen1.nip);
  printf("Nama   : %s\n",dosen1.nama);
  printf("Alamat : %s\n",dosen1.alamat);
  printf("\n\n");
  printf("Data Dosen Kedua\n");
  printf("------------------\n");
  printf("NIP    : %li\n",dosen2.nip);
  printf("Nama   : %s\n",dosen2.nama);
  printf("Alamat : %s\n",dosen2.alamat);
  printf("\n\n");
  system("PAUSE");	
  return 0;
}

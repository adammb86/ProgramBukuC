/*
  Program 7.7
  Nama File  : Lat-7.7.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

void jumlah_deret(int batas, int *jumlah);

void jumlah_deret(int batas,int *jumlah)
{ 
  int x;   
  *jumlah=0;
  for(x=1;x<=batas;x++)
  {    
       *jumlah=*jumlah+x;
  }
}

int main(int argc, char *argv[])
{
  int batas,jumlah;
  printf("Masukkan batas deret  : ");scanf("%i",&batas);
  jumlah_deret(batas,&jumlah);
  printf("\nJumlah Deret          = %i\n\n",jumlah);
  system("PAUSE");	
  return 0;
}


/*
  Program 6.4
  Nama File  : Lat-6.4.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int baris,kolom;
  printf("Masukkan jumlah baris : ");scanf("%i",&baris);
  while(baris>=1)
  {
       kolom=1;
       while(kolom<=baris)
       {
            printf("%2i ",baris*kolom);
            kolom++;
       }
       printf("\n");
       baris--;
  }
  printf("\n");          
  system("PAUSE");	
  return 0;
}

/*
  Program 6.9
  Nama File  : Lat-6.9.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  i=0;
  awal:
       i=i+1;
       printf("%i\n",i);
       if(i<10)
            goto awal;
       else
            goto akhir;
       printf("Perintah ini tak akan dieksekusi\n");
       printf("Perintah ini juga tak akan dieksekusi\n");
       
  akhir:
       printf("\n");
  system("PAUSE");	
  return 0;
}

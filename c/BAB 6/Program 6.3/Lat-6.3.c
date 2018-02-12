/*
  Program 6.3
  Nama File  : Lat-6.3.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,j,jumlah;
  jumlah=0;
  printf("Masukkan bilangan : ");scanf("%i",&j);
  printf("\nJumlah deret      = ");
  for(i=1;i<=j;i++)
  {
       jumlah=jumlah+i;
       printf("%i ",i);
       if(i<j)
              printf("+ ");
  }
  printf("\n                  = %i\n\n",jumlah);
  system("PAUSE");	
  return 0;
}

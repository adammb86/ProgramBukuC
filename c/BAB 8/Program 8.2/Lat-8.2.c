/*
  Program 8.2
  Nama File  : Lat-8.2.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x[5],i;
  for(i=0;i<=4;i++)
  {
      printf("Masukkan nilai %i : ",i+1);scanf("%i",&x[i]);
  }
  printf("\n");
  for(i=0;i<=4;i++)
  {
      printf("Nilai ke-%i       = %i\n",i+1,x[i]);
  }
  printf("\n");
  system("PAUSE");	
  return 0;
}

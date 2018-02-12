/*
  Program 6.11
  Nama File  : Lat-6.11.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,j;
  printf("Masukkan banyak pengulangan : ");scanf("%i",&j);
  for(i=1;i<=j;i++)
  {
       printf("%i\n",i);
       if(i==(j-3))
            break;
  }
  printf("\ni terakhir (break=banyak-3) = %i\n\n",i);
  system("PAUSE");	
  return 0;
}

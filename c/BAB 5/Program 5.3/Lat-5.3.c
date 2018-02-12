/*
  Program 5.3
  Nama File  : Lat-5.3.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int bil;
  printf("Masukkan bilangan bulat: ");scanf("%i",&bil);
  if(bil>=0)
  {
       printf("\nBilangan yang dimasukkan adalah %i\n",bil);
       printf("Bilangan ini adalah bilangan positif\n\n");
  }
  else
  {
       printf("\nBilangan yang dimasukkan adalah %i\n",bil);
       printf("Bilangan ini adalah bilangan negatif\n\n");
  }         
  system("PAUSE");	
  return 0;
}

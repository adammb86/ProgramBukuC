/*
  Program 8.9
  Nama File  : Lat-8.9.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nama[2][2][10];
  int i,j;
  for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)
     {
        printf("Nama[%i][%i] : ",i+1,j+1);gets(nama[i][j]);
     }
     printf("\n");
  }
  for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)
     {
        printf("Nama[%i][%i] : %s\n",i+1,j+1,nama[i][j]);
     }
  }
  printf("\n");
  system("PAUSE");	
  return 0;
}

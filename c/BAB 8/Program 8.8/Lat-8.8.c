/*
  Program 8.8
  Nama File  : Lat-8.8.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char hari[7][10];
  int i;
  for(i=0;i<7;i++)
  {
     printf("Hari ke-%i : ",i+1);gets(hari[i]);
  }
  printf("\n");
  for(i=0;i<7;i++)
  {
     printf("Hari ke-%i : %s\n",i+1,hari[i]);
  }
  printf("\n\n");
  system("PAUSE");	
  return 0;
}

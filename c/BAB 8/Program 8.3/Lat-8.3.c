/*
  Program 8.3
  Nama File  : Lat-8.3.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x[5]={1,2,3,4,5};
  int i;
  for(i=0;i<=4;i++)
  {
      printf("x[%i] default= %i\n",i,x[i]);
  }
  x[2]=30;
  x[3]=40;
  printf("\n");
  for(i=0;i<=4;i++)
  {
      printf("x[%i]        = %i\n",i,x[i]);
  }
  printf("\n");
  system("PAUSE");	
  return 0;
}

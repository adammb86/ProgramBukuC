/*
  Program 8.4
  Nama File  : Lat-8.4.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;  
  char nama[5]={'A','d','@','m','\0'};
  char nama2[5]="Ad@m";
  printf("Array per karakter = ");
  for(i=0;i<=4;i++)
  {
      printf("%c",nama[i]);
  }
  printf("\n");
  printf("Array string       = %s\n\n",nama2);
  system("PAUSE");	
  return 0;
}

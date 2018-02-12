/*
  Program 7.13
  Nama File  : Lat-7.13.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int pangkat(int x,int y);

int main(int argc, char *argv[])
{
  int a,b;  
  printf("x  : ");scanf("%i",&a);
  printf("y  : ");scanf("%i",&b);
  printf("x pangkat y = %i\n\n",pangkat(a,b));
  system("PAUSE");	
  return 0;
}

int pangkat(int x,int y)
{
  if(y==1)
  {
       return x;
  }
  else
  {
       return (x*pangkat(x,y-1));
  }
}

/*
  Program 8.6
  Nama File  : Lat-8.6.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a[2][2];//matriks 2 baris 2 kolom
  int b[2][2];
  int c[2][2];
  int i,j;
  //input
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          printf("a[%i][%i] : ",i+1,j+1);scanf("%i",&a[i][j]);
      }
      printf("\n");
  }
  printf("\n");
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          printf("b[%i][%i] : ",i+1,j+1);scanf("%i",&b[i][j]);
      }
      printf("\n");
  }
  printf("\n");
  //proses
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          c[i][j]=a[i][j]+b[i][j];
      }
  }
  //output
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          printf("c[%i][%i] : %i\n",i+1,j+1,c[i][j]);
      }
      printf("\n");
  }
  printf("\n");
  system("PAUSE");	
  return 0;
}

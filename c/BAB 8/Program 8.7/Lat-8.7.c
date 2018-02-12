/*
  Program 8.7
  Nama File  : Lat-8.7.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main(int argc, char *argv[])
{
  int a[3][3];//matriks 3 baris 3 kolom
  int b[3][3];
  int c[3][3];
  int i,j;
  //input
  printf("Matriks pertama\n");
  printf("---------------");
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
       gotoxy(j*5+1,i+3);
       scanf("%i",&a[i][j]);
     }
  }
  printf("\n");
  printf("Matriks kedua\n");
  printf("-------------");
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
       gotoxy(j*5+1,i+9);
       scanf("%i",&b[i][j]);
     }
  }
  //proses
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          c[i][j]=a[i][j]+b[i][j];
      }
  }
  //output
  system("cls");
  printf("Matriks Hasil\n");
  printf("-------------");
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
       gotoxy(j*5+1,i+3);
       printf("%i",c[i][j]);
     }
  }
  printf("\n\n");
  system("PAUSE");	
  return 0;
}

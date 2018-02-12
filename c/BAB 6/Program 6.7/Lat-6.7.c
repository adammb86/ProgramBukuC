/*
  Program 6.7
  Nama File  : Lat-6.7.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define pass 1234
int main(int argc, char *argv[])
{
  int password,i;
  i=0;
  do
  {
      printf("Masukkan password yang benar : ");scanf("%i",&password);
      if(password==pass)
           printf("Password anda benar!\n");
      else
      {
          printf("Password anda salah\n");
          getch();
          system("cls");
      }
      i++;
  }while((password!=pass)&&(i!=3));
  system("PAUSE");	
  return 0;
}

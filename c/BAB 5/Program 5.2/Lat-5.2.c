/*
  Program 5.2
  Nama File  : Lat-5.2.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float IP;
  printf("Berapa IP anda : ");scanf("%f",&IP);
  if(IP>=3.5)
  {
       printf("\nIP anda %.2f\n",IP);
       printf("Anda cum laude!\n\n");
  }
  system("PAUSE");	
  return 0;
}

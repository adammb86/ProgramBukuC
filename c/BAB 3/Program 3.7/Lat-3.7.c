/*
  Program 3.7
  Nama File  : Lat-3.7.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  
    char nama[31]; 
    char pekerjaan[21]; 
    printf("Nama      : ");fflush(stdin);scanf("%s",nama);
    printf("Pekerjaan : ");fflush(stdin);gets(pekerjaan);
    printf("\nData yang telah dimasukan adalah : \n\n");
    printf("Nama      : %s\nPekerjaan : %s\n\n",nama,pekerjaan);
    system("PAUSE");	
    return 0;
}

/*
  Program 6.5
  Nama File  : Lat-6.5.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int jml_data;
  float nilai,rata2,jml_nilai;
  jml_data=0;
  jml_nilai=0;
  printf("Masukkan nilai : ");scanf("%f",&nilai);
  while((nilai>=0)&&(nilai<=100))
  {
       jml_data=jml_data+1;
       jml_nilai=jml_nilai+nilai;
       printf("Masukkan nilai : ");scanf("%f",&nilai);
  }
  if(jml_data!=0)
  {
       rata2=jml_nilai/jml_data;
       printf("\nRata-rata      = %.2f\n\n",rata2);
  }
  else
       printf("\nTidak ada data inputan!\n\n");
  system("PAUSE");	
  return 0;
}

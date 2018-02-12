/*
Program     : menghitung luas dan keliling lingkaran
nama file   : 
Nim         : 10108685
Nama        : cepi bagja nugrha
*/

//Program
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float diameter, r, luas, kel;
  diameter=8;
  r = diameter / 2;
  luas = 3.14 *r*r;
  kel = 2 * 3.14 *r ;
  printf("Keliling Lingkaran = %f cm\n",kel);
  printf("Luas Lingkaran     = %f cm persegi\n\ns",luas);
  system("PAUSE");	
  return 0;
}

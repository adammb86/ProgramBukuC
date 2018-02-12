/*
  Program Menghitung Keliling dan Luas Lingkaran
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float d,r,kel,luas;
    d=10;
    r=d/2;
    kel=2*3.14*r;
    luas=3.14*r*r;
    cout<<"Keliling Lingkaran   = "<<kel<<" cm"<<endl;
    cout<<"Luas Lingkaran       = "<<luas<<" cm persegi"<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

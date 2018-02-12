/*
  Program 11.5
  Nama File  : Lat-11.5.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 	int bil_bulat[]={0,1,2,3,4};
  	int *pbil,i;
  	//penugasan array
 	pbil=bil_bulat;
  	for(i=0;i<5;i++)
  	{
      cout<<"Nilai yang ditunjuk  ["<<i+1<<"] : "<<*(pbil+i)<<endl;
      cout<<"Alamat yang ditunjuk ["<<i+1<<"] : "<<(pbil+i)<<endl<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}

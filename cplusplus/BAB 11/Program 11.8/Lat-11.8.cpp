/*
  Program 11.8
  Nama File  : Lat-11.8.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 	int *bil;
  	int i,jumlah_bil;
  	cout<<"Masukkan jumlah data : ";cin>>jumlah_bil;
  
  	//penugasan pointer dan alokasi memori
 	bil=(int *)malloc(sizeof(int)*jumlah_bil);
  
  	//input data
  	cout<<endl;
  	for(i=0;i<jumlah_bil;i++)
  	{
      cout<<"Bilangan ke-"<<i+1<<" : ";cin>>*(bil+i);
    }
  
  	//output data
  	cout<<endl;
  	for(i=0;i<jumlah_bil;i++)
  	{
      cout<<"Bilangan ke-"<<i+1<<" = "<<*(bil+i)<<endl;
    }
  	cout<<endl<<endl;
  
  	//dealokasi memori
  	free(bil);
  	
    system("PAUSE");
    return EXIT_SUCCESS;
}

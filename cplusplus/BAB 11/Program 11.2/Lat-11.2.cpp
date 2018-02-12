/*
  Program 11.2
  Nama File  : Lat-11.2.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 	int v;
  	int *pv;
  	cout<<"Masukkan nilai v : ";cin>>v;
  	cout<<endl;
  	//penugasan pointer
  	pv=&v;
  	cout<<"Hasil tanpa pointer:"<<endl;
  	cout<<"Nilai v   : "<<v<<endl;
  	cout<<"Alamat v  : "<<&v<<endl<<endl;
  	cout<<"Hasil tanpa pointer:"<<endl;
  	cout<<"Nilai v   : "<<*pv<<endl;
  	cout<<"Alamat v  : "<<pv<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

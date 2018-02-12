/*
  Program 7.6
  Nama File  : Lat-7.6.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

float kecepatan(float s, float t);

float kecepatan(float s, float t)
{
  float v;
  v=s/t;
  return v;
}

int main(int argc, char *argv[])
{
  float s_isi,t_isi,v;
  cout<<"Masukkan jarak (KM) : ";cin>>s_isi;
  cout<<"Masukkan waktu (S)  : ";cin>>t_isi;
  v=kecepatan(s_isi,t_isi);
  cout<<endl;
  cout<<setiosflags(ios::fixed);
  cout<<"Kecepatan           = "<<setprecision(2)<<v<<" KM/Jam"<<endl<<endl;
  system("PAUSE");	
  return 0;
}

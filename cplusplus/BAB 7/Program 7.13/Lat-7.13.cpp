/*
  Program 7.13
  Nama File  : Lat-7.13.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int pangkat(int x,int y);

int pangkat(int x,int y)
{
  if(y==1)
  {
       return x;
  }
  else
  {
       return (x*pangkat(x,y-1)); //rekursi fungsi
  }
}

int main(int argc, char *argv[])
{
    int a,b;  
    cout<<"x  : ";cin>>a;
    cout<<"y  : ";cin>>b;
    cout<<"x pangkat y = "<<pangkat(a,b)<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
  Program 8.9
  Nama File  : Lat-8.9.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char nama[2][2][10];
    int i,j;
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
        cout<<"Nama["<<i+1<<"]["<<j+1<<"] : ";cin>>nama[i][j];
      }
      cout<<endl;
    }
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
        cout<<"Nama["<<i+1<<"]["<<j+1<<"] : "<<nama[i][j]<<endl;
      }
    }
    cout<<endl;         
    system("PAUSE");
    return EXIT_SUCCESS;
}

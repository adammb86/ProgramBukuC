/*
  Program 8.3
  Nama File  : Lat-8.3.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x[5]={1,2,3,4,5};
    int i;
    for(i=0;i<=4;i++)
    {
        cout<<"x["<<i<<"] default= "<<x[i]<<endl;
    }
    x[2]=30;
    x[3]=40;
    cout<<endl;
    for(i=0;i<=4;i++)
    {
        cout<<"x["<<i<<"]        = "<<x[i]<<endl;
    }
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

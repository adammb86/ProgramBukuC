/*
  Program 6.10
  Nama File  : Lat-6.10.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    for(i=1;i<=5;i++)
    {      
         goto free_pass;      
         if(i%2==0)
              cout<<i<<" bilangan genap!"<<endl<<endl;
         else
         {
              free_pass:
                 cout<<i<<" bilangan ganjil!"<<endl<<endl;
         }  
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}

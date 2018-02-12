/*
  Program 5.2
  Nama File  : Lat-5.2.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    float IP;
    cout<<"Berapa IP anda : ";
    cin>>IP;
    if(IP>=3.5)
    {    
         cout<<setiosflags(ios::fixed);//supaya tidak dibulatkan  
         cout<<"\nIP anda "<<setprecision(2)<<IP<<endl;
         cout<<"Anda cum laude!"<<endl<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}

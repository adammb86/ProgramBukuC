/*
  Program 6.13
  Nama File  : Lat-6.13.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>
#include <conio2.h>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    for(i=2;i<=12;i++)
    {
		gotoxy(9,i);
		textbackground(LIGHTGREEN);
		cout<<"               ";
    }
  
    for(i=2;i<=12;i++)
    {
		gotoxy(25,i);
		textbackground(YELLOW);
		cout<<"               ";
    }
  
    for(i=2;i<=12;i++)
    {
		gotoxy(41,i);
		textbackground(LIGHTBLUE);
		cout<<"               ";
    }
  
    for(i=2;i<=12;i++)
    {
		gotoxy(57,i);
		textbackground(LIGHTMAGENTA);
		cout<<"               ";
    }
    textbackground(WHITE);
    cout<<endl<<endl<<endl;
    textcolor(BLACK);
    system("PAUSE");
    return EXIT_SUCCESS;
}

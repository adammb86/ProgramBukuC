/*
  Program 7.3
  Nama File  : Lat-7.3.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

//prototipe fungsi
void Kotak(int X1,int Y1, int X2,int Y2,int Bingkai,int Latar);

void Kotak(int X1,int Y1, int X2,int Y2,int Bingkai,int Latar)
{
  int i;
  textcolor(Bingkai);
  textbackground(Latar);
  gotoxy(X1,Y1);printf("Ú");//untuk simbol Ú cari di simbol M.Word dengan Character Code 218 from ASCII(decimal) lalu copy-kan 
  gotoxy(X1,Y2);printf("%c",192);//ASCII Decimal 192
  gotoxy(X2,Y1);printf("%c",191);
  gotoxy(X2,Y2);printf("%c",217);
  for (i=X1+1;i<=X2-1;i++)
  {
       gotoxy(i,Y1);printf("%c",196);
       gotoxy(i,Y2);printf("%c",196);
  }
  
  for(i=Y1+1;i<=Y2-1;i++)
  {
       gotoxy(X1,i);printf("%c",179);
       gotoxy(X2,i);printf("%c",179);
  }
}

int main(int argc, char *argv[])
{
  //warna background
  textbackground(WHITE);
  clrscr();           
  Kotak(1,1,80,24,WHITE,BLUE);
  Kotak(2,2,15,23,WHITE,RED);
  textbackground(WHITE);
  textcolor(BLACK);
  gotoxy(1,25);system("PAUSE");	
  return 0;
}

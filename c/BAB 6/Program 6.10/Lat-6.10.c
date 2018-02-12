/*
  Program 6.10
  Nama File  : Lat-6.10.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  for(i=1;i<=5;i++)
  {      
       goto free_pass;      
       if(i%2==0)
            printf("%i bilangan genap!\n\n",i);
       else
       {
            free_pass:
                 printf("%i bilangan ganjil!\n\n",i);
       }  
  }
  system("PAUSE");	
  return 0;
}

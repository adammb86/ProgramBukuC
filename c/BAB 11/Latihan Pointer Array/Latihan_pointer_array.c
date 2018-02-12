/*
  Program 11.7
  Nama File  : Lat-11.7.c
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

#define maks 100

void tambah_array(int data[],int *banyakdata,int databaru)
{
     if(*banyakdata<maks)
     {
          data[*banyakdata]=databaru;
          *banyakdata+=1;
     }
     else
          printf("Array penuh. Penambahan data baru gagal\n");
          
     printf("\n");
}

void tampil_array(int *data,int banyakdata)
{
     int i;
     for(i=0;i<banyakdata;i++)
     {
          printf("   %i  ",*(data+i));    
     }
}

void sisip_array(int data[],int *banyakdata,int databaru,int posisiarray)
{
     int i;
     if(*banyakdata<=maks)
     {
          if((posisiarray>0)&&(posisiarray<=*banyakdata))
          {
               posisiarray--;//dalam bahasa c/c++ indeks array dimulai dari 0 jadi 
                            //posisinya harus dikurangi 1
               for(i=*banyakdata;i>=posisiarray;i--)//down to
               {
                    data[i+1]=data[i];
               }
               data[posisiarray]=databaru;
               *banyakdata+=1;     
          }
          else
          {
              printf("Posisi yang anda masukkan di luar memory array. Penyisipan gagal\n");
          }
     }
     else
         printf("Array sudah penuh. Penyisipan gagal\n");
}

void hapus_array(int data[],int *banyakdata, int posisiarray)
{
     int i;
     if(*banyakdata>0)
     {
          if((posisiarray>0)&&(posisiarray<=*banyakdata))
          {
               posisiarray--;//dalam bahasa c/c++ indeks array dimulai dari 0 jadi 
                       //posisinya harus dikurangi 1     
               for(i=posisiarray;i<*banyakdata;i++)
               {
                    data[i]=data[i+1];
               }
               *banyakdata-=1;//jumlah data harus dikurangi karena dihapus
          }
          else
               printf("Posisi yang anda masukkan di luar memory array. Penghapusan gagal\n");
     }     
     else
         printf("Array kosong. Jadi tidak ada yang bisa dihapus.\n");
}

int main(int argc, char *argv[])
{
 	//latar belakang
 	textbackground(GREEN);
 	system("cls");
 	
    textcolor(YELLOW);
    int a[maks],i,x,y,z,b;
    int bd=0;//banyakdata mula-mula
    printf("Mau berapa data [0-10]? ");scanf("%i",&x);
	printf("\n");
    for(i=0;i<x;i++)
    {
         printf("Masukkan data baru ke-%i = ",i+1);scanf("%i",&y);
		 printf("\n");
         tambah_array(a,&bd,y);
    }
    textcolor(LIGHTGREEN);
    if(x>=maks)
    {
         x=maks;
    }
    
    tambah_array(a,&bd,y);
    tampil_array(a,x);
    
    printf("\n\n");
    system("pause");
    system("cls");
    
    textcolor(YELLOW);
    printf("Array sebelumnya : \n\n");
	tampil_array(a,x);printf("\n\n");
    printf("Mau menyisipkan ke posisi mana? ");scanf("%i",&z);
	printf("\n");
    printf("Masukkan data baru ke-%i = ",i+1);scanf("%i",&y);
	printf("\n");
    sisip_array(a,&bd,y,z);
    if(x>=maks)
    {
         x=maks;
    }
    else
        x++;
    
    textcolor(LIGHTGREEN);
    tampil_array(a,x);
    
    printf("\n\n");
    system("pause");
    system("cls");
    
    textcolor(YELLOW);
    printf("Array sebelumnya : \n\n");
    tampil_array(a,x);printf("\n\n");
    printf("Mau menghapus posisi yang mana? ");scanf("%i",&b);
	printf("\n");
    hapus_array(a,&bd,b);
    if(x>=maks)
    {
         x=maks-1;
    }
    else
        x--;
    
    textcolor(LIGHTGREEN);
    tampil_array(a,x);
    
    printf("\n\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}


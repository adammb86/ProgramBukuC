#include <cstdlib>
#include <iostream>
#include <conio2.h>

using namespace std;

#define maks 10

void tambah_array(int data[],int banyakdata, int databaru);
void tampil_array(int *data, int banyakdata);
void sisip_array(int data[],int *banyakdata,int databaru,int posisiarray);
void hapus_array(int data[],int *banyakdata, int posisi);

void tambah_array(int data[],int *banyakdata,int databaru)
{
     if(*banyakdata<maks)
     {
          data[*banyakdata]=databaru;
          *banyakdata+=1;
     }
     else
          cout<<"Array penuh. Penambahan data baru gagal"<<endl;
          cout<<endl;
}

void tampil_array(int *data,int banyakdata)
{
     int i;
     for(i=0;i<banyakdata;i++)
     {
          cout<<"   "<<*(data+i)<<"  ";    
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
              cout<<"Posisi yang anda masukkan di luar memory array. Penyisipan gagal"<<endl;
          }
     }
     else
         cout<<"Array sudah penuh. Penyisipan gagal"<<endl;
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
               cout<<"Posisi yang anda masukkan di luar memory array. Penghapusan gagal"<<endl;
     }     
     else
         cout<<"Array kosong. Jadi tidak ada yang bisa dihapus."<<endl;
}

int main(int argc, char *argv[])
{
 	//latar belakang
 	textbackground(GREEN);
 	system("cls");
    textcolor(YELLOW);
    int a[maks],i,x,y,z,b;
    int bd=0;//banyakdata mula-mula
    cout<<"Mau berapa data [0-10]? ";cin>>x;cout<<endl;
    for(i=0;i<x;i++)
    {
         cout<<"Masukkan data baru ke-"<<i+1<<" = ";cin>>y;cout<<endl;
         tambah_array(a,&bd,y);
    }
    textcolor(LIGHTGREEN);
    if(x>=maks)
    {
         x=maks;
    }
    
    tambah_array(a,&bd,y);
    tampil_array(a,x);
    
    cout<<"\n\n";
    system("pause");
    system("cls");
    
    textcolor(YELLOW);
    cout<<"Array sebelumnya : "<<"\n\n";
    tampil_array(a,x);cout<<"\n\n";
    cout<<"Mau menyisipkan ke posisi mana? ";cin>>z;cout<<endl;
    cout<<"Masukkan data baru ke-"<<i+1<<" = ";cin>>y;cout<<endl;
    sisip_array(a,&bd,y,z);
    if(x>=maks)
    {
         x=maks;
    }
    else
        x++;
    
    textcolor(LIGHTGREEN);
    tampil_array(a,x);
    
    cout<<"\n\n";
    system("pause");
    system("cls");
    
    textcolor(YELLOW);
    cout<<"Array sebelumnya : "<<"\n\n";
    tampil_array(a,x);cout<<"\n\n";
    cout<<"Mau menghapus posisi yang mana? ";cin>>b;cout<<endl;
    hapus_array(a,&bd,b);
    if(x>=maks)
    {
         x=maks-1;
    }
    else
        x--;
    
    textcolor(LIGHTGREEN);
    tampil_array(a,x);
    
    cout<<"\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

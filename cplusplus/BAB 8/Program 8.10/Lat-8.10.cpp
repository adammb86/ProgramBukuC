/*
  Program 8.10
  Nama File  : Lat-8.10.cpp
  Programmer : Adam Mukharil Bachtiar, S.Kom.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void input_array(int bil[],int banyak_data)
{
    int i;   
    for(i=0;i<banyak_data;i++)
    {
      cout<<"Nilai bil["<<i+1<<"] : ";cin>>bil[i];
    }
}

int jumlah_elemen(int bil[],int banyak_data)
{
    int i,jumlah=0;
    for(i=0;i<banyak_data;i++)
    {
       jumlah=jumlah+bil[i];
    }
    return jumlah;     
}     

int main(int argc, char *argv[])
{
    int bil[100];//maksimal elemen
    int banyak_data;
    int jumlah;
    cout<<"Masukkan banyak elemen yang diinginkan : ";cin>>banyak_data;
    cout<<endl;
  
    //memanggil void input_array
    input_array(bil,banyak_data);
  
    //memanggil fungsi jumlah_elemen
    jumlah=jumlah_elemen(bil,banyak_data);
  
    cout<<endl;
    cout<<"Hasil penjumlahan elemen = "<<jumlah<<endl<<endl;         
    system("PAUSE");
    return EXIT_SUCCESS;
}

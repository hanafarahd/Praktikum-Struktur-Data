//Nama	: Hana Farahdiana
//Kelas	: Manajemen Informatika 2020A
//NIM	: 20051397073



#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

main ()
{
    int jd,no,kiri,kanan,center;
    char data[20][50],cari[20];

    cout<<" Input Jumlah Data  : ";
    cin>>jd;

   cout<<endl;
    for (no=0;no<jd;no++)
    {
        cout<<" Input Data Ke-"<<(no+1)<<"    : ";
       cin>>data[no];
    }

   cout<<endl;
    cout<<" Input Nilai Dicari : ";
    cin>>cari;

    kiri=0;
    kanan=jd-1;
   center=(kanan-kiri)/2;

    while ((strcmp(data[center],cari)!=0) && (kiri>=0)&& (kanan<jd) && (kanan>=kiri))
    {
        if (strcmp (cari,data[center])>0)
       {
           kiri=center+1;
       }
       else if (strcmp (cari,data[center])<0)
       {
           kanan=center-1;
       }
       center=kiri+(kanan-kiri)/2;
    }
   cout<<endl;
    if (strcmp(data[center],cari)==0)
    {
        cout<<" Keterangan         : Data Ditemukan";
    }
    else
    {
        cout<<" Keterangan         : Data Tidak Ditemukan";
   }
    getch();
}

//Nama	: Hana Farahdiana
//Kelas	: Manajemen Informatika 2020A
//NIM	: 20051397073



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //Deklarasi variabel
   int val[100];
   int i, n, t;

   //Input
   cout<<endl;
   printf("RIZKI JANUAR IRMANSYAH\n");
 printf("20051397046\n");
 printf("MI_B_2020\n");
   cout<<"\n\t\t\tPengurutan Menaik Metode Shell Shot \n\n\n";
   cout<<"Masukkan Jumlah Data yg ingin di urutkan : ";cin>>n;
   cout<<endl;
    for(i = 0; i < n; i++)
   {
       cout<<"Nilai ke-"<<1+i<<"  : ";cin>>val[i];
   }

   //Shell Sort
    for(int w = n/2; w > 0;w=w/2)
    {
       for(int x = w; x < n; x++)
      {
          for (int y = x-w; y >= 0; y-=w)
         {
             if(val[y+w] < val[y]) //Note
            {
                t=val[y+w];
               val[y+w]=val[y];
               val[y]=t;
            }
         }
      }
   }

   //Mencetak data setelah diurutkan
   cout<<endl;
   cout<<" DATA YG TELAH DIURUTKAN DENGAN MENGGUNAKAN SHELL SORT  \n";
   cout<<endl;
   for(i = 0; i < n; i++)
   {
       cout<<val[i]<<" ";
   }
   getch();
}

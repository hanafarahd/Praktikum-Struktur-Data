/*Hana Farahdiana
NIM : 20051397073
-. 2020A -.
Praktikum 7 (1) "Menampilkan perubahan setiap iterasi dari proses pengurutan" */

#include <iostream>
using namespace std;

int main (){
	int data [] = {7, 3, 5, 10, 1, 6, 4, 2};
	int lenght = sizeof(data)/sizeof(*data);
	int temp;
	
	//metode (selection sort)
	cout << "\n=== 1. Perubahan Setiap Iterasi ===" << endl;
	for(int i= 1; i<lenght; i++){
		for(int j=0; j<lenght-i; j++){
			if(data[j] > data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
				
				}
		}
		
		for(int k=0; k<lenght; k++){
			cout<<" " << data[k]<<" | ";
		}
		cout << endl;
	}
	
	 
	//menampilkan hasil
	cout << "\n=== Hasil Sorting : ==="<<endl;
	for(int x=0; x<lenght; x++){
		cout << " "<<data[x]<<endl;
	}
}

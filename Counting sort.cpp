#include <iostream>
using namespace std;

int main(){
	int acak [6] = {3,1,7,4,3,5};

			     // 0 1 2 3 4 5

	int kumulatif [8] = {0,0,0,0,0,0,0,0};

					// 0 1 2 3 4 5 6 7

	int hasil [6];

	int temp;

	int jumlah;

	int a;

	// langkah pertama

	for (int i = 0; i <= 5; i++){

		temp = acak[i];	// satu

		jumlah = kumulatif [temp];	// dua

		jumlah = jumlah + 1; 	// tiga

		kumulatif [temp] = jumlah;

	}
	
	//Cara kedua
	for(int i=0; i<7; i++){
		a = kumulatif[i] + kumulatif[i+1];
		kumulatif[i+1] = a; 
	}
	
	// Cek 
	for(int j=0; j<=7; j++){
		cout << kumulatif [j];
	}
	cout << endl;
	
	// Cara ketiga
	int c;
	for(int i=0; i<=5; i++){
		temp = acak[i]; 
		c = kumulatif [temp] = c;
		hasil[c] = temp;
	}
	// Cek
	for(int j=0; j<=5; j++){
		cout << hasil[j];
	}
}

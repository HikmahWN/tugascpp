#include <iostream>
using namespace std;

int main() {
	float alas, tinggi, hasil, panjang, lebar;
	int input;
	
	cout << "Pilihan Hitungan\n";
	cout << "   1. P\n";
	cout << "   2. S\n";
	cin >> input;
	
	switch (input)
	{
		case 1 : 
			cout << "Masukkan Panjang : ";
			cin >> panjang;
			cout << "Masukkan Lebar : ";
			cin >> lebar;
			hasil = panjang * lebar;
			cout << "Luas Persegi Panjang adalah : " << hasil << endl;
			break;
			
			cout << "\n=================================================\n";
			
			case 2 :
				cout << "Masukkan Alas : ";
				cin >> alas;
				cout << "Masukkan Tinggi : ";
				cin >> tinggi;
				hasil = alas * tinggi / 2;
				cout << "Luas Segitiga Adalah : " << hasil << endl;
				break;
	}
	
}

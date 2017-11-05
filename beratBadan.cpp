#include <iostream>
using namespace std;

int main (){
	float tinggi, berat, hasil;
	
	cout << "Masukkan Tinggi Badan (cm) : ";
	cin >> tinggi;
	cout << "Masukkan Berat Badan (kg) : ";
	cin >> berat;
	cout << "Berat Badan anda adalah : " << endl;
	
	if (berat < tinggi/2.5)
	{
		cout << "UnderWeight";
	}
	else if (tinggi/2.5 <= berat <= tinggi/2.3)
	{
		cout << "Normal";
	}
}

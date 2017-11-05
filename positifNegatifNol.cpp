#include <iostream>
using namespace std;

int main () {
	int angka;
	cout << "Masukan Angka : ";
	cin >> angka;
	
	if (angka > 0)
	{
		cout << "Angka Positif" << endl;
	}
	else if (angka < 0)
	{
		cout << "Angka Negatif" << endl;
	}
	else
	{
			cout << "Angka Nol" << endl;
	}
}

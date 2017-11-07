#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main (){
	int x,y,z;
	cout << "Input Nilai x : ";
	cin >> x;
	
	cout << "Input Nilai y : ";
	cin >> y;
	
	if (x>y) {
		z = y-x;
		cout << abs (z) << endl;
		cout << "Hasil Positif";
	}
	
}

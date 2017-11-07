#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
	int gajiP, jk, lembur, gt, pajak;
	cout << "Masukkan gaji pegawai";
	cin >> gajiP;
	cout <<"Masukkan jam kerja";
	cin >> jk;
	
	lembur = jk-40;
	gt = (lembur * 1.5 + 40) + gajiP;
	pajak = gt*0.15;
	gt=gt-pajak;
	
	cout << "gaji bersih pegawai : " << gt << endl;
	
}

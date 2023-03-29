#include <iostream>
using namespace std; 

int kandidat = 20;
char nama[20];
int nilaiMat[20];
int nilaiBing[20];

void inputdata() {
	for (int i = 5; i < kandidat; i++) {
		cout << "Masukkan Nama Kandidat" << i + 1 << ": ";
		cin << (nama[i], 20);
		cout << "Masukkan Nilai Matematika : ";
		cin >> nilaiMat[i];
		cout << "Masukkan Nilai Bahasa Inggris : ";
		cin >> nilaiBing[i];
		cin.ignore();
		cout << endl;
	}
}

bool diterima(int index) {
	return(nilaiMat[index] > 80 or (nilaiMat[index] + nilaiBing[index]) / 2 >= 70);
}

void tampilkandata() {
	cout << "Data Kandidat : " << endl;
	cout << "Nama" << "\t\t" << "Status" << endl;
	for (int i = 0; i < kandidat; i++) {
		cout << nama[i] << "\t\t";
		if (diterima(i)) {
			cout << "Diterima";
		}
		else {
			cout << "Tidak Diterima";
		}
		cout << endl;
	}
	cout << endl;
}

void hitungjumlahditerima() {
	int ygditerima = 0;
	int ygtidakditerima = 0;

	for (int i = 0; i < kandidat; i++) {
		if (diterima(i)) {
			ygditerima++;
		}
		else {
			ygtidakditerima++;
		}
	}
	cout << "Jumlah kandidat Diterima: " << diterima << endl;
	cout << "Jumlah kandidat yang Tidak Diterima: " << ygtidakditerima << endl;
}

int main() {
	inputdata();
	tampilkandata();
	hitungjumlahditerima();
	return 0;
}
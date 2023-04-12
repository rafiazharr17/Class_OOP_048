#include <iostream>
using namespace std;


class Mahasiswa {

private:
	int nim;
	string nama;

public:
	void inputdata() {
		cout << "Masukkan NIM = ";
		cin >> nim;
		cout << "Masukkan Nama = ";
		cin >> nama;
	}

	void tampildata() {
		cout << "\nNIM = " << nim;
		cout << "\nNama = " << nama;
		cout << endl;
	}

};

class Matakuliah {
	
private:
	int sks;
	string kode;
	string namaMK;

public:
	void inputMK();
	void tampilMK();
};

void Matakuliah::inputMK() {
	cout << "\nMasukkan Kode Matakuliah = ";
	cin >> kode;
	cout << "Masukkan Nama Matakuliah = ";
	cin >> namaMK;
	cout << "Masukkan Jumlah SKS = ";
	cin >> sks;
}

void Matakuliah::tampilMK() {
	cout << "\nKode Matakuliah = " << kode;
	cout << "\nNama Matakuliah = " << namaMK;
	cout << "\nJumlah SKS = " << sks;
}

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.inputdata();
	mhs.tampildata();

	mk.inputMK();
	mk.tampilMK();

}
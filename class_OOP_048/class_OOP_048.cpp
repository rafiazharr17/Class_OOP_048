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

};
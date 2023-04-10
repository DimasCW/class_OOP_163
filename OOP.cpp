#include<iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "nim = " << nim;
		cout << "nama = " << nama;
	}
};

class matakuliah {
private:
	int sks;
	string kode;
	string namamk;
public:
	void inputmk() {
		cout << "\nmasukkan jumlah sks = ";
		cin >> sks;
		cout << "\nmasukkan kode mk = ";
		cin >> kode;
		cout << "\nmasukkan nama mk = ";
		cin >> namamk;
	}

	void tampil() {
		cout << "\njumlah sks = " << sks;
		cout << "\nkode mk = " << kode;
		cout << "\nnama mk = " << namamk << endl;
	}
};

int main() {
	mahasiswa mhs;
	matakuliah mk;

	cout << "masukkan nim = ";
	cin >> mhs.nim;
	cout << "masukkan nama = ";
	cin >> mhs.nama;

	mhs.tampil();
	mk.inputmk();
	mk.tampil();
}
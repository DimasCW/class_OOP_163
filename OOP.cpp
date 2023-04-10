#include<iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "nim = " << nim<<endl;
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

	void tampilmk() {
		cout << "\njumlah sks = " << sks<<endl;
		cout << "\nkode mk = " << kode<<endl;
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
	mk.tampilmk();

}
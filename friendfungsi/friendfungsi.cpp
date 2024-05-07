#include <iostream>
using namespace std;

class siswa;
class orang {
private:
	string nama;

public:
	void setnama(string Pnma);
	friend class siswa;
};

class siswa{
private:
	int id;

public:
	void setID(int pid);
	void displayAll(orang& a);
};

void siswa::displayAll(orang& a) {
	cout << id << endl << a.nama;
}

void orang::setnama(string pnama) {
	nama = pnama;
}

void siswa::setID(int pId) {
	id = pId;
}


int main()
{
	orang joko;
	joko.setnama("joko susilo");
	siswa joko_siswa;
	joko_siswa.setID(1);
	joko_siswa.displayAll(joko);
	return 0;}


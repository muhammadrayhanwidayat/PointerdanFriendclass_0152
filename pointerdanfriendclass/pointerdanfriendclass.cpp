#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNIM() {
		cout << "No Induk = " << nim << endl;
	}

};

int main()
{
	mahasiswa mhs{ 1 };//object mhs
	mhs.showNIM();//membee access operator

	mahasiswa& refMhs = mhs;//pointer reference refMhs
	refMhs.nim = 2;//member access operator
	mhs.showNIM();

}


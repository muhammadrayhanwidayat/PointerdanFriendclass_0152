#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	string nama;
public:
	friend void setNama(mahasiswa& a, string);
};

void setnama(mahasiswa& a, string pNama) {
	a.nama = pNama;
}



int main()
{
 



}


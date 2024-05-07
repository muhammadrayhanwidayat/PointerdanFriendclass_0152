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





int main()
{
   
}


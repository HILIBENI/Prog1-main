#include <iostream>
#include <fstream>

using namespace std;

class House {
public:
	House(int s = 0,int f = 0,int p = 0, int d = 0) {
		this->Space = s;
		this->Floors = f;
		this->Price = p;
		this->DateBuilt = d;
	}
	~House() = default;

	int getSpace() {
		return this->Space;
	}
	void setSpace(int s) {
		s = this->Space;
	}

	int getFloors() {
		return this->Floors;
	}
	void setFloors(int f) {
		this->Floors = f;
	}

	int getPrice() {
		return this->Price;
	}
	void setPrice(int p) {
		this->Price = p;
	}

	int getDateBuilt() {
		return this->DateBuilt;
	}
	void setDateBuilt(int d) {
		d = this->DateBuilt;
	}

	void toFile(string fname) {
		ofstream file;
		file.open(fname +".txt", ios::out);
		file << this->Space << " m2, " << this->Floors << " Floors, " << this->Price << "$, Built in " << this->DateBuilt << endl;
		file.close();
	}


private:
	int Space;
	int Floors;
	int Price;
	int DateBuilt;
};

void readHouse(string fname, House& h) {
	ifstream ifile;
	ifile.open(fname + ".txt", ios::in);
	int s, f, p, db;
	ifile >> s >> f >> p >> db;
	h.setSpace(s);
	h.setFloors(f);
	h.setPrice(p);
	h.setDateBuilt(db);
	cout << s << f << p << db;

	ifile.close();

}
int main() {
	House A(200,2,1200000,1986);
	A.toFile("b");
	House B;
	readHouse("xd", B);
	cout << B.getPrice();

	return 0;
}
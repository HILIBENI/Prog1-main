using namespace std;
#include <fstream>

class BMW {
public:
	BMW(int h = 0, int c = 0, int ca = 0, int a = 0, int r = 0) {
		this->hp = h;
		this->col = c;
		this->cap = ca;
		this->am = a;
		this->rd = r;
	}
	~BMW() = default;

	int GetHP() {
		return this->hp;
	}
	void setHP(int h) {
		this->hp = h;
	}

	int GetCol() {
		return this->col;
	}
	void SetCol(int c) {
		this->col = c;
	}

	int GetCap() {
		return this->cap;
	}
	void SetCap(int c) {
		this->cap = c;
	}

	int GetAmount() {
		return this->am;
	}
	void SetAmount(int a) {
		this->am = a;
	}

	int GetRdate() {
		return this->rd;
	}
	void SetRdate(int r) {
		this->rd = r;
	}

	void write(string fname) {
		ofstream f;
		f.open(fname + ".txt", ios::out);
		f << this->hp << " Horsepower\n";
		f << this->col << " Color\n";
		f << this->cap << " Carrying Capacity(People)\n";
		f << this->am << " Amount Made\n";
		f << this->rd << " Year first made\n";
		f.close();
	}
private:
	int hp; //horsepower
	int col; //color
	int cap; //capacity
	int am; //amount made
	int rd; //release date

};

ofstream operator << (ofstream& of, BMW& B) {
	of << B.GetCap() << " " << B.GetCol();
}
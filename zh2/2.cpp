#include <iostream>
using namespace std;

class House {
public:
	House(int s = 0, int f = 0, int p = 0, int d = 0) {
		this->Space = s;
		this->Floors = f;
		this->Price = p;
		this->category = d;
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

	int getcategory() {
		return this->category;
	}
	void setcategory(int d) {
		d = this->category;
	}



private:
	int Space;
	int Floors;
	int Price;
	int category;
};


int main() {
	House* ho = new House;
	return 0;
}
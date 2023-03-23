#include <iostream>
#include <string>

using namespace std;

/*
#define RED 0
#define BLUE 1
*/
/*
class Test {

};

struct Car {
	string rendszam;
	int szin;
	int kerek;
	string marka;
};

int main() {

	Car C1;
	Car C2;

	C1.kerek = 4;
	C2.rendszam = "JHG-648";
	C2.szin = RED;
	return 0;
}
*/


struct Car {
	string szin;
	int loero;
	string tipus;
	bool kolcsonzott;
	int ar;
};

void print(Car* c) {
	int total = 0;
	int tv = 0;
	for (int i = 0; i < 5; i++) {
		if (c[i].kolcsonzott == false) {
			total += 1;
		}
		tv += c[i].ar;
	}
	cout << "total value: " << tv << " EUR \ntotal number of free cars: " << total << endl;
}
string yesno(bool x) {
	if (x = true) {
		return "Yes";
	}
	if (x = false) {
		return "No";
	}
	else {
		return "Invalid type";
	}
}

void pc(Car* c) {
	int cindex = 3;
	cout << "Price: " << c[cindex].ar << endl;
	cout << "Power: " << c[cindex].loero << endl;
	cout << "Color: " << c[cindex].szin << endl;
	cout << "Type: " << c[cindex].tipus << endl;
	cout << "Is Rented: " << yesno(c[cindex].kolcsonzott) << endl;
}


int main() {
	Car *c = new Car[5];
	srand(time(NULL));
	string colors[5] = { "Black","White","Yellow","Green","Pink"};
	string types[5] = {"Sedan","Sportscar","SUV","All-Terrain","Hatchback"};
	for (int i = 0; i < 5;i++) {
		c[i].ar = rand() % 10000;
		c[i].loero = rand() % 500;
		c[i].kolcsonzott = rand() % 2;
		c[i].szin = colors[rand() % 5];
		c[i].tipus = types[rand() % 5];
	}
	print(c);
	pc(c);

	return 0;
}
#include <iostream>
#include "h9.cpp"



int main() {
	BMW A(200,2,4,50000,2018);
	A.write("A");
	ofstream f2;
	f2.open("f2.txt", ios::out);
	f2 << A;

	return 0;
}

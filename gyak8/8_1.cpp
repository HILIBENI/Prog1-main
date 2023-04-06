#include <iostream>
#include "h.cpp"

using namespace std;

int main() {
	Audi A(100000,230,true,160);
	A.SetHorsepower(230);
	Audi B;
	B = A;
	cout << B.GetHorsepower();
	return 0;
}


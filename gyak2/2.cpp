#include <iostream>
using namespace std;

void oddeven(int arlen, int tomb[50]) {
	for (int i = 0; i < arlen; i++) {//iterate through array
		if ((i + 1) % 2 == 0) {//if i is even / divisible by 2
			tomb[i] = rand() % 10;
		}
		if ((i + 1) % 2 == 1) {//if i is odd
			tomb[i] = (rand() % 12) - 3;
		}

	}
}

void five(int arlen, int tomb[50]) {
	for (int i = 0; i < arlen; i++) {
		if ((i + 1) % 5 == 0) {//every 5th element
			cout << i + 1 << ". index = " << tomb[i] << "\n";
		}
	}
}

void prnum( int tomb[50], int arlen) {
	while (true){
		int input;
		cin >> input;
		if (input >= 0) {
			tomb[input] += 1;
			
		}
		else {
			cout << "------------------\n";
			for (int i = 0; i < arlen; i++) {//iterate trough array and print every value in new line
				cout << i + 1 << ". index = " << tomb[i] << "\n";

			}
			break;
		}
	}
}

void gyak1() {
	int ntomb[50] = { 0 };
	int len = sizeof(ntomb) / sizeof(int);

	oddeven(len, ntomb);
	five(len, ntomb);
	prnum(ntomb, len);
}
//-------------------------------------------------------------------------
//end of 1. gyakorlat

void gyak2() {
	int num = 1;
}
int main() {
	gyak1();
	return 0;
}
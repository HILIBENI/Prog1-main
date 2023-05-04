#include <iostream>
using namespace std;

int arraysize(char* c) {
	int x = sizeof(c);
	return x / sizeof(char);
}

void changemh(char* c) {
	for (int i = 0; i < arraysize(c); i++) {
		if (c[i] == 97 or c[i] == 101 or c[i] == 105 or c[i] == 111 or c[i] == 117) {
			c[i] = (rand() % 10) + 48;
		}
	}
}


void delchar(char* c) {
	char unum;
	cout << "\nchoose a letter to delete: ";
	cin >> unum;
	for (int i = 0; i < arraysize(c); i++) {
		if (c[i] == unum) {
			c[i] = 32;
		}
		cout << c[i];
	}
}


int main() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	char* lc = new char[a];
	srand(time(NULL));
	for (int i = b; i < c; i++) {
		
		char c = (rand() % 26) + 97;
		lc[i] = c;
		cout << c;
	}

	int mhnum = 0;

	for (int i = 0; i < a; i++) {
		if (lc[i] != 97 and lc[i] != 101 and lc[i] != 105 and lc[i] != 111 and lc[i] != 117) {
			mhnum++;
		}
	}
	cout << endl << mhnum << endl;

	changemh(lc);
	for (int i = 0; i < arraysize(lc); i++) {
		cout << lc[i];
	}
	delchar(lc);
	delete lc;
	return 0;
}
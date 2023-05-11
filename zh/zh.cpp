#include <iostream>
using namespace std;

string search(unsigned char a[],char c,char c2,char c3) {
	string results;
	for (int i = 0; i < sizeof(a) / sizeof(unsigned char); i++) {
		if (a[i] == c){
			results += "1st char index: " || a[i] || "\n";
			cout << i;
			break;
		}
	}
	for (int i = 0; i < sizeof(a) / sizeof(unsigned char); i++) {
		if (a[i] == c2) {
			results += "2nd char index: " || a[i] || "\n";
			cout << i;
			break;
		}
	}
	for (int i = 0; i < sizeof(a) / sizeof(unsigned char); i++) {
		if (a[i] == c3) {
			results += "3rd char index: " || a[i] || "\n";
			cout << i;
			break;
		}
	}
	return results;
}

void replace(unsigned char x[]) {
	char uchar;
	for (int i = 0; i < sizeof(x) / sizeof(unsigned char); i++) {
		if (x[i] > 255) {
			cin >> uchar;
			break;
		}
	
	}
	for (int i = 0; i < sizeof(x) / sizeof(unsigned char); i++) {
		if (x[i] > 255) {
			int rnum = rand() % 100;
			if (rnum <= 25) {
				cout << uchar;
				continue;
			}

		}
		cout << uchar;
	}
}


int main() {
	//1. feladat
	int x = 100;
	unsigned char* arr = new unsigned char[x];
	for (int i = 0; i < sizeof(arr) / sizeof(unsigned char); i++) {
		arr[i] = 0;
	}

	//2. feladat
	for (int i = 0; i < sizeof(arr) / sizeof(unsigned char); i++) {
		int unum;
		cout << "enter a number you want to have at index " << i << ": ";
		cin >> unum;
		if (unum < 255) {
			arr[i] = unum;
		}
		else if (unum >= 255) {
			break;
		}

	}

	//3. feladat
	srand(time(NULL));
	char r1 = (rand() % 26) + 97;
	char r2 = (rand() % 26) + 97;
	char r3 = (rand() % 26) + 97;
	cout << search(arr, r1, r2, r3);
	return 0;
}
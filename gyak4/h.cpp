

#include <iostream>
#ifndef ORA4_H
#define ORA4_H


using namespace std;
static void change(int ci, int cn, int* arr) {
	arr[ci] = cn;
	cout << arr[ci];
}
static auto fegy() {
	static struct f1str{
		int* apt = new int[15];
		int index;
		int unum;
	};
	f1str f;
	for (int i = 0; i < 14; i++) {
		f.apt[i] = (rand() % 25) - 5;
	}

	cout << "enter an index : ";
	cin >> f.index;
	cout << "\nenter a number : ";
	cin >> f.unum;

	return f;
	
}
#endif // !ORA4_H
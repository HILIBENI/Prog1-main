#include <iostream>
using namespace std;

void f1() {
	int n1 = 0;
	int n2 = 1;
	int n3 = 2;
	int n4 = 3;

	int* p1 = &n1;
	int* p2 = &n2;
	int* p3 = &n3;
	int* p4 = &n4;

	*p4 = 10;
	cout << *p4;
}

void f2() {
	
	char C[15];
	char* pc = C;

	int arlen = sizeof(C) / sizeof(char);
	
	for (int i = 0; i < arlen - 1; i++) {
		cout << i + 1 << ". elem:";
		cin >> pc[i];
		cout << pc[i] << "\n";
	}
}

void f3() {

	int input;
	cin >> input;

	if (10 < input < 150) {
		int* tp;
		float* tp2;
		int n2 = 0;
		tp = new int[input];
		for (int i = 0; i <= input - 1; i++) {
			tp[i] = (rand() % 150) - 30;
		}
		tp2 = new float[input/3];//creates array from third of user input
		for (int i = 1; i < input; i+= 3) {
			int tri = i / 3;//TRue Index, used for referencing items in the original(tp) array
			tp2[tri] = (static_cast<float>(tp[i - 1]) + tp[i + 1]) / 2;//calculate average of left and right array indices.
			cout << tp2[tri] << " Calculated from " << tp[i - 1] << " and " << tp[i + 1]<< "\n";
			n2++;
		
		}
		cout << "total number of entries: " << n2;
	}
}

int main() {
	f3();
	return 0;
}
//homework: write a program that consumes as much memory as possible.

#include <iostream>

int main() {
	int i = 0;
	while (1) {
		i++;
		int* ptr = new int[i*RAND_MAX];
	}
	return 0;
}
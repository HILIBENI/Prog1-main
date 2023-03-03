//homework: write a program that consumes as much memory as possible.

#include <iostream>

int main() {
	while (1) {
		int* ptr = (int*)malloc(INT_MAX);
	}
	return 0;
}
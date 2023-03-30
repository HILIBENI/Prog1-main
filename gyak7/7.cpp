#include <iostream>

using namespace std;

typedef unsigned int ProductNumber; // replaces int with ProductNumber, useful if you wanna change it code-wide
ProductNumber x = 32; // same as int x = 32, but imagine you have 300 of these and wanna change them to float

struct product {
	string type;
	int amount;
	int price;
	string prodc;
};

string chargen(int len, bool num) {
	string letters = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	string letnum = letters + "0123456789";
	string output;
	switch (num)
	{
	case(true): {
		for (int i = 0; i < len; i++) {
			output += letnum[rand() % letnum.length()];
		}
		break;
	}
	case(false): {
		for (int i = 0; i < len; i++) {
			output += letters[rand() % letters.length()];
		}
		break;
	}
			   return output;
	}
}

void initprod(product* p) {
	string typel[5] = { "Dairy", "Meat", "Electronic", "Household", "Toy" };

	for (int i = 0; i < 12; i++) {
		p[i].type = typel[rand() % 5];
		p[i].amount = rand() % 10000;
		p[i].price = rand() % 25600;
		string pc1 = chargen(2, false);
		string pc2 = chargen(5, false);
		string pc3 = chargen(2, true);
		p[i].prodc = pc1 + "-" + pc2 + "-" + pc3;
	}
}

int main() {
	product* Prod = new product[12];
	initprod(Prod);
	return 0;
}
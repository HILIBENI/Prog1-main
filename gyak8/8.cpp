#include <iostream>
using namespace std;
typedef unsigned int PosNumber;


class Mercedes
{
public:
	//Mercedes() = default; //set every value to 0/false
	Mercedes(PosNumber h=0, PosNumber c=0, bool a=false, PosNumber w=0) {
		this->hp = h;
		this->color = c;
		this->autodrive = a;
		this->wheelsize = w;
	}
	Mercedes(const Mercedes& M) = default; //copy függvény
	~Mercedes() = default;

	PosNumber GetHP() const{//getter
		return this->hp;
	}
	void SetHP(PosNumber h) {//setter
		this->hp = h;
	}

	PosNumber GetColor() const{
		return this->color;
	}
	void SetColor(PosNumber c) {
		this->color = c;
	}

	bool GetAutodrive() const{
		return this->autodrive;
	}
	void SetAutodrive(bool ad) {
		this->autodrive = ad;
	}

	PosNumber GetWheelsize() const{
		return this->wheelsize;
	}
	void SetWheelsize(PosNumber w) {
		this->wheelsize = w;
	}

	Mercedes operator = (Mercedes& M) { //overload the = operator, to define what happens when we set two classes to be = 
		this->hp = M.GetHP();
		this->color = M.GetColor();
		this->autodrive = M.GetAutodrive();
		this->wheelsize = M.GetWheelsize();
	}

private:
	PosNumber hp;
	PosNumber color;
	bool autodrive;
	PosNumber wheelsize;
};


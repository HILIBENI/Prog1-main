class Audi
{
public:
	Audi(int p=0,int t=0,bool i=false,int h=0) {
		this->Price = p;
		this->TopSpeed = t;
		this->InProduction = i;
		this->Horsepower = h;
	}
	~Audi() = default;

	int GetPrice() {
		return this->Price;
	}
	void SetPrice(int p) {
		this->Price = p;
	}

	int GetSpeed() {
		return this->TopSpeed;
	}
	void SetSpeed(int s) {
		this-> TopSpeed = s;
	}

	int GetProduction() {
		return this->InProduction;
	}
	void SetProduction(int i) {
		this->InProduction = i;
	}

	int GetHorsepower() {
		return this->Horsepower;
	}
	void SetHorsepower(int h) {
		this->Horsepower = h;
	}

	Audi operator = (Audi& A) {
		this->Price = A.GetPrice();
		this->TopSpeed = A.GetSpeed();
		this->InProduction = A.GetProduction();
		this->Horsepower = A.GetHorsepower();
		return *this;
	}

private:
	int Price;
	int TopSpeed;
	bool InProduction;
	int Horsepower;
};
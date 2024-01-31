#include<iostream>
#include<string>
using namespace std;
//vritual

class Mammal {
public:
	virtual void breed() = 0;
};

class Cat :public Mammal {
	void breed() {
		cout << "°í¾çÀÌ »õ³¢ ³º´ÂÁß" << endl;
	}
};

class Dog :public Mammal {
	void breed() {
		cout << "°­¾ÆÁö »õ³¢ ³º´ÂÁß" << endl;
	}
};

class shape {
	virtual double getArea()=0;
	virtual double getRound()=0;
};


//class Circle Triangle square

class Circle : public shape {
private:
	int radious;
public:
	double getArea() {
		return this->radious * this->radious * 3.14;
	}
	double getRound() {
		return this->radious * 2 * 3.14;
	}
};

class Triangle :public shape {
private:
	int base, height;
public:
	Triangle(int b, int h) :base(b), height(h) {}
	double getArea() {
		return this->base * this->height * 0.5;
	}
	double getRound() {
		return base * 3;
	}
};


class square : public shape {
private :
	int side;
public:
	square(int s) :side(s) {}
	double getArea() {
		return this->side * this->side;
	}
	double getRound() {
		return this->side * 4;
	}
};

int main() {
	Circle a(5);
	Triangle b(2, 5);
	square c(5);

	cout << a.getArea << endl;
}

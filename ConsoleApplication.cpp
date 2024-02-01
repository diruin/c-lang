#include<iostream>
#include<string>
using namespace std;

class Shape {
public:
	virtual double getarea() = 0;
	virtual double getround() = 0;
};

class Circle : public Shape {
private :
	int radious;
public:
	Circle(int r) :radious(r) {};
	double getarea() {
		return this->radious * this->radious * 3.14;
	}
	double getround() {
		return this->radious * 2 * 3.14;
	}


};





int main() {

	Circle a(4);
	cout << a.getarea() << endl;
	cout << a.getround() << endl;







	return 0;
}
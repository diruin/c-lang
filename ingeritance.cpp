#include<iostream>
#include<string>
using namespace std;

class Monster {
protected:
	int hp;
	int attack;
public:
	Monster(int h, int a) :hp(h), attack(a) {}
	int hit() {
		return this->attack;
	}

};
class Slime:public Monster {
public:
	Slime(int h, int a) :Monster(h, a) {}
	
	int poison() {
		return this->attack * 2;
	}




};

class Wolf :public Monster {
public:
	Wolf(int h, int a) : Monster(h, a) {}

	int crawling() {
		return  30;
	}
};




int main() {

	Slime blue(100, 10);

	cout << blue.hit() << endl;
	cout << blue.poison() << endl;

	Wolf gray(200, 20);
	cout << gray.hit() << endl;
	cout << gray.crawling() << endl;




	return 0;
}
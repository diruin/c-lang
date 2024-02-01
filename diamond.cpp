#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
	virtual void breathe() {
		cout << "¼û½°" << endl;
	}
};
class Mammal : public Animal {
public:
	void breathe() override {
		cout << "ÄÚ·Î ¼û½°" << endl;
	}
	void breed(){
		cout << "»õ³¢ ³ºÀ½" << endl;
	}
};

class Bird :public Animal {
public :
	void breathe() override {
		cout << "³¯¸é¼­ ¼û½°" << endl;
	}
	void flapping() {
		cout << "ÆÄ´ÚÆÄ´Ú" << endl;
	}

};

class Bat :public Mammal, public Bird {
public :
	void breathe() override {
		Mammal::breathe();
	}
	void echoing() {
		cout << "ÃÊÀ½ÆÄ ¹ß»ç" << endl;
	}
};
int main() {
	
	Bat batman;
	batman.breathe();
	



	return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
	virtual void breathe() {
		cout << "����" << endl;
	}
};
class Mammal : public Animal {
public:
	void breathe() override {
		cout << "�ڷ� ����" << endl;
	}
	void breed(){
		cout << "���� ����" << endl;
	}
};

class Bird :public Animal {
public :
	void breathe() override {
		cout << "���鼭 ����" << endl;
	}
	void flapping() {
		cout << "�Ĵ��Ĵ�" << endl;
	}

};

class Bat :public Mammal, public Bird {
public :
	void breathe() override {
		Mammal::breathe();
	}
	void echoing() {
		cout << "������ �߻�" << endl;
	}
};
int main() {
	
	Bat batman;
	batman.breathe();
	



	return 0;
}
#include<iostream>
#include<string>
using namespace std;


class Car {
private:
	string model;
	string company;
	int fuel_efficiency;
	int seater;
	int gassolin;
public:
	void introduce() {
		cout << this->model << endl;
		cout << this->company << endl;
		cout << this->fuel_efficiency << endl;
		cout << this->seater << endl;
		cout << this->gassolin << endl;
	}

	//생성자 함수
	Car(string m, string c,	int f,	int s,	int g) {
		this->model=m;
		this->company=c;
		this->fuel_efficiency=f;
		this->seater=s;
		this->gassolin=g;
	}
	void drive(int distance) {
		if (this->gassolin - distance / this->fuel_efficiency < 0) {
			cout << "못움직임 " << endl;

		}
		else {
			this->gassolin -= distance / this->fuel_efficiency;
			cout << " 움직일수 있음 " << endl;
		}


	}


};





int main() {
	Car a("k5", "kia", 10, 4, 1220);
	Car b("K3", "K", 3, 2, 100);
	a.introduce();
	a.drive(20000);
	a.introduce();
	b.introduce();
	




	return 0;
}
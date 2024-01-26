#include<iostream>
#include<string>
using namespace std;
class Slime {
private:
	string name;
	int hp;
public:
	Slime(string n):name(n) {
		this->hp = 100;
	}
	void info() const {
		//this.name = "asd";
		cout << this->name <<" "<< this->hp << endl;
	}
	void damaged(int damage) {
		this->hp -= damage;
	
	}
};

int main(){
	
	

	Slime a("¿œ∫ª");
	Slime b = a;
	
	a.damaged(30);
	b.info();




	return 0;
}
#include<iostream>
#include<string>
using namespace std;


class Employee {
private:
	const int id;
	string name;
	mutable int access;

public:
	Employee(int id, string name) :id(id), name(name), access(0) {}
	int getId()const {
		this->access++;
		return this->id;
	}
	string getName() {
		this->access++;
		return this->name;
	}
};
int main() {


}//main
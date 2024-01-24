#include<iostream>
using namespace std;

namespace NamespaceA {
	void display() {
		printf("Inside NamespaceA\n");
	}
	int value = 50;
}
namespace NamespaceB {
	void display() {
		printf("Inside NamespaceB\n");
	}
	double value = 3.14;
}
using namespace NamespaceA;

int main() {
	//namespaceA의 display 함수와 value를 사용
	display();
	cout << "NamespaceA value:" << value << endl;


	NamespaceB::display();
	cout << "NamespaceB value : "<< NamespaceB::value << endl;






	return 0;

}
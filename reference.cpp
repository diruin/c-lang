#include<iostream>
using namespace std;
int main() {
	//���۷��� ����[��Ī,��Ī]
	int a = 10;
	//int* ptr;
	//ptr = &a;
	int& ref = a;//���۷��� ����
	ref++;
	cout << a << endl;





	return 0;
}
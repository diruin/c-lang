#include<iostream>
using namespace std;
int main() {
	//래퍼런스 변수[애칭,별칭]
	int a = 10;
	//int* ptr;
	//ptr = &a;
	int& ref = a;//래퍼런스 변수
	ref++;
	cout << a << endl;





	return 0;
}
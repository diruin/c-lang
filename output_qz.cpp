#include<iostream>
using namespace std;
int main() {
	int year;
	int a;
	cout << "태어난 연도 입력";
	cin>> year;
	a = 2024 - year;
	cout << a <<"살입니다"<< endl;

	int l;
	cout << "한변의 길이를 입력";
	cin >> l;
	cout << l * l << endl;

	int r;
	cout << "반지름 길이를 입력 : ";
	cin >> r;
	cout << "둘레 : " << 2 * r * 3.14 << " 넓이 : " << r * r * 3.14 << endl;

	double b;
	double c;
	double d;
	cout << "숫자입력 : ";
	cin >> b;
	cin >> c;
	cin >> d;
	cout << (b + c + d) / 3 << "입니다" << endl;
	





	return 0;
}
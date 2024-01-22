#include<iostream>
#include<string>
using namespace std;
//string upper(string my_string, char alp) {
//
//	if (my_string.find(alp) == string::npos) {
//		return my_string;
//	}
//	else {
//		my_string[my_string.find(alp)] = alp - 32;
//		return my_string;
//	}
//}
//string trimBack(string my_string, int n) {
//	return my_string.substr(my_string.length() - n, n);
//}

string rny(string rny_string) {
	string answer = "";
	for (int i = 0; i < rny_string.length(); i++) {
		if (rny_string[i] == 'm')answer += "rn";
		else answer += rny_string[i];
	}
	return answer;
}


int main() {

	string name;

	//1.length()
	//cout << "이름 무엇 ? ";
	//cin >> name;
	//cout << "이름은 " << name << "입니다" << endl;

	////영어 , 특수문자 뺴고 다 2 byte 임.
	//cout << "당신의 이름의 길이는 " << name.length()/2 << "이군요" << endl;

	//2. substr(start,length) : 부분 문자열
	//string coffee;
	//cout << "당신의 최애 커피는? ";
	//cin >> coffee;
	//cout << coffee.substr(0, 3) << endl;

	//3.find(substr,start): 시작되는 곳의 인덱스 돌려줌
	//string coffee;
	//cout << "당신의 최애 커피는? ";
	//cin >> coffee;
	//cout << coffee.find("cano", 0) << endl;

	////4.append(string): 끝에 추가
	//string dog;
	//cout << "당신이 키우는 개 이름은?";
	//cin >> dog;
	//dog.append("킹갓");
	//cout << "당신의 개 이름은 " << dog << "이군요" << endl;

	////5.insert(index,string):index 번째에 string 넣겠음
	//string coffee;
	//cout << "커피 이름 입력 : ";
	//cin >> coffee;
	//coffee.insert(0, "차가운");
	//cout << "주문하신 " << coffee << "가 나옴" << endl;

	//6.erase(start,length): 지정된 범위의 문자 삭제
	//string coffee = "americano";
	//coffee.erase(0, 6);
	//cout << coffee << endl;

	//7.replace(start,length,string)
	/*string coffee = "americano";
	coffee.replace(0, 5, "british");
	cout << coffee;*/



	//8.compare(string):  비교하는것
	//// 문자열이 같으면 0 , 첫번째가 크면 1, 두번째가 크면 -1
	//string coffee = "americano";
	//cout << coffee.compare("z") << endl;

	//9.[]
	/*int num;
	cin >> num;

	string coffee = "maxim";
	cout << coffee[num];*/

	/*string my_string;
	char alp;
	int a;
	cout << "글자를 입력하세요" << endl;
	cin >> my_string;
	cout << "대문자로 바꿀 알파벳을 입력하세요 " << endl;
	cin >> alp;
	a = my_string.find(alp, 0);
	cout << a;
	*/

	//string my_string;
	//int a;
	//cout << "글자를 입력하세요" << endl;
	//cin >>my_string;
	//cout << "정수 n 을 입력하세요 " << endl;
	//cin >> a;
	//my_string.erase(a, my_string.length());
	//cout << my_string << endl;


	/*cout << trimBack("Hello", 2) << endl;*/

	//string my_string;
	//cin >> my_string;
	//my_string.find("m", 0);
	//my_string.replace(my_string.find("m", 0),1,"rn");
	//cout << my_string;

	string my_string;
	cin >> my_string;
	rn(my_string);
	cout<<my_string;





	return 0;
}
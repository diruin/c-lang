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
	//cout << "�̸� ���� ? ";
	//cin >> name;
	//cout << "�̸��� " << name << "�Դϴ�" << endl;

	////���� , Ư������ ���� �� 2 byte ��.
	//cout << "����� �̸��� ���̴� " << name.length()/2 << "�̱���" << endl;

	//2. substr(start,length) : �κ� ���ڿ�
	//string coffee;
	//cout << "����� �־� Ŀ�Ǵ�? ";
	//cin >> coffee;
	//cout << coffee.substr(0, 3) << endl;

	//3.find(substr,start): ���۵Ǵ� ���� �ε��� ������
	//string coffee;
	//cout << "����� �־� Ŀ�Ǵ�? ";
	//cin >> coffee;
	//cout << coffee.find("cano", 0) << endl;

	////4.append(string): ���� �߰�
	//string dog;
	//cout << "����� Ű��� �� �̸���?";
	//cin >> dog;
	//dog.append("ŷ��");
	//cout << "����� �� �̸��� " << dog << "�̱���" << endl;

	////5.insert(index,string):index ��°�� string �ְ���
	//string coffee;
	//cout << "Ŀ�� �̸� �Է� : ";
	//cin >> coffee;
	//coffee.insert(0, "������");
	//cout << "�ֹ��Ͻ� " << coffee << "�� ����" << endl;

	//6.erase(start,length): ������ ������ ���� ����
	//string coffee = "americano";
	//coffee.erase(0, 6);
	//cout << coffee << endl;

	//7.replace(start,length,string)
	/*string coffee = "americano";
	coffee.replace(0, 5, "british");
	cout << coffee;*/



	//8.compare(string):  ���ϴ°�
	//// ���ڿ��� ������ 0 , ù��°�� ũ�� 1, �ι�°�� ũ�� -1
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
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> my_string;
	cout << "�빮�ڷ� �ٲ� ���ĺ��� �Է��ϼ��� " << endl;
	cin >> alp;
	a = my_string.find(alp, 0);
	cout << a;
	*/

	//string my_string;
	//int a;
	//cout << "���ڸ� �Է��ϼ���" << endl;
	//cin >>my_string;
	//cout << "���� n �� �Է��ϼ��� " << endl;
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
#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
	string onwer;
	int idNumber;
	int balance;
public:
	class BankAccount(string o) {
		this->onwer = o;
		this->idNumber = 1;
		this->balance = 0;
	}

	void withdraw(int amount) {
		if (this->balance <amount) {
			return  "��ݺҰ�" ;
		}
		else {
			balance -= amount;
			return "��ݵǾ����ϴ�";
		}
	};
	void deposit(int amount) {
		this->balance += amount;
	}
	void checkBalance() {
		return this->balance;
	};




};


	
int main() {
	BankAccount mine("mega");

	
	int money;
	cout << "�Աݾ� : ";
	cin >> money;
	mine.deposit(money);
	cout << mine.checkBalance() << endl;

	int withdrawmoney;
	cout << "��ݾ� : ";
	cin >> withdrawmoney;
	mine.withdraw(withdrawmoney);
	cout << mine.checkBalance() << endl;







	return 0;
}
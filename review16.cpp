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
			return  "출금불가" ;
		}
		else {
			balance -= amount;
			return "출금되었습니다";
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
	cout << "입금액 : ";
	cin >> money;
	mine.deposit(money);
	cout << mine.checkBalance() << endl;

	int withdrawmoney;
	cout << "출금액 : ";
	cin >> withdrawmoney;
	mine.withdraw(withdrawmoney);
	cout << mine.checkBalance() << endl;







	return 0;
}
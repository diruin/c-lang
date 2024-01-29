#include<iostream>
#include<string>
using namespace std;

class TodoItem {
private:
	string content;
	bool isCompleted;
public:
	TodoItem() :content(content), isCompleted(false) {}

	void setContent() {
		string todo;
		cout << "할일 내용 : ";
		cin >> todo;
		this->content = todo;
	}
	void getContent() {
		cout << this->content << endl;
	}
	void complete() {
		this->isCompleted = true;
	}
	bool isComplete()const {
		return this->isCompleted;
	}
};

class TodoLIst {
private:
	TodoItem item[100];
	int itemCount;
public:
	TodoLIst() :itemCount(0) {}

	void addItem() {
		TodoItem temp;
		temp.setContent();
		item[this->itemCount++] = temp;
	}
	void showtodos() {
		for (int i = 0; i < this->itemCount; i++) {
			cout << i + 1;
			this->item[i].getContent();
		}
	}


};

int main() {
	TodoLIst myList;
	myList.addItem();
	myList.addItem();
	myList.showtodos();



}
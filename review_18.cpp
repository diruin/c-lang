#include<iostream>
#include<string>


using namespace std;
//투두리스트
//1.할일추가
//2.할일보기
//3.할일 완료하기
//4.완료된 일 보기
//5.프로그램 종료

class TodoItem {
private:
	string content;
	bool isCompleted;
public:
	TodoItem() :content(content),isCompleted(false) {};
	void setContent() {
		string todo;
		cout << "할일 입력" << endl;
		cin >> todo;
		this->content = todo;
	}
	string getContent() {
		return this->content;
	}
	void setcontent() {
		this->isCompleted = true;
	}
	bool getIscompleted() const{
		return this->isCompleted;
	}
};

class TodoList {
public:
	TodoItem item[100];
	int itemCount;
private:
	TodoList() :itemCount(0) {}
	void addItem() {
		TodoItem temp;
		temp.setcontent();
		item[this->itemCount++] = temp;
	}

	void makeDone() {
		this->showTodo();
		int doneItemnumber;
		cout << "완료된 번호 입력 : ";
		cin >> doneItemnumber;
		if (doneItemnumber < 0 || doneItemnumber) {
			cout << "없는 투두리스트 번호입니다" << endl;
			return;
		}
		else {
			if (this->item[doneItemnumber].getIscompleted()) {
				cout << "이미 완료된 일" << endl;
			}
			else {
				this->item[doneItemnumber].setcontent();
				cout << "완료되었습니다" << endl;
			}
		}

	}


	void showTodo() {
		for (int i = 0; i < this->itemCount; i++) {
			if (!this->item[i].getIscompleted()) {
				cout << i + 1 << this->item[i].getContent() << endl;
			}
		}
	}

	void showDone() {
		for (int i = 0; i < this->itemCount; i++) {
			if (this->item[i].getIscompleted()) {
				cout << i + 1 << this->item[i].getContent() << " 완료" << endl;
			}
		}
	}

};

class UI {
public:
	void showChoice() {
		cout << "투두 리스트" << endl;
		cout << "1.할일 추가하기" << endl;
		cout << "2.할일 보기" << endl;
		cout << "3.할일 완료하기" << endl;
		cout << "4.완료된 일보기" << endl;
		cout << "5.프로그램 종료" << endl;

	}
};



int	main() {
	UI todoListSystem;
	TodoList todoList;
	while (true) {
		todoListSystem.showChoice();
		cout << "번호입력" << endl;
		int systemnumber;
		cin >> systemnumber;
		switch (systemnumber) {
		case 1:
			
		}
	}

	return 0;

}
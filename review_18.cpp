#include<iostream>
#include<string>


using namespace std;
//���θ���Ʈ
//1.�����߰�
//2.���Ϻ���
//3.���� �Ϸ��ϱ�
//4.�Ϸ�� �� ����
//5.���α׷� ����

class TodoItem {
private:
	string content;
	bool isCompleted;
public:
	TodoItem() :content(content),isCompleted(false) {};
	void setContent() {
		string todo;
		cout << "���� �Է�" << endl;
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
		cout << "�Ϸ�� ��ȣ �Է� : ";
		cin >> doneItemnumber;
		if (doneItemnumber < 0 || doneItemnumber) {
			cout << "���� ���θ���Ʈ ��ȣ�Դϴ�" << endl;
			return;
		}
		else {
			if (this->item[doneItemnumber].getIscompleted()) {
				cout << "�̹� �Ϸ�� ��" << endl;
			}
			else {
				this->item[doneItemnumber].setcontent();
				cout << "�Ϸ�Ǿ����ϴ�" << endl;
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
				cout << i + 1 << this->item[i].getContent() << " �Ϸ�" << endl;
			}
		}
	}

};

class UI {
public:
	void showChoice() {
		cout << "���� ����Ʈ" << endl;
		cout << "1.���� �߰��ϱ�" << endl;
		cout << "2.���� ����" << endl;
		cout << "3.���� �Ϸ��ϱ�" << endl;
		cout << "4.�Ϸ�� �Ϻ���" << endl;
		cout << "5.���α׷� ����" << endl;

	}
};



int	main() {
	UI todoListSystem;
	TodoList todoList;
	while (true) {
		todoListSystem.showChoice();
		cout << "��ȣ�Է�" << endl;
		int systemnumber;
		cin >> systemnumber;
		switch (systemnumber) {
		case 1:
			
		}
	}

	return 0;

}
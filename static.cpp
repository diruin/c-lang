#include<iostream>
#include<string>
using namespace std;

class Lesson {
private:
	int students;
	string lessonName;
	static int totalStudents;
public:
	Lesson(string l,int s) {
		this->lessonName = 1;
		this->students = s;
		this->totalStudents += s;
	}
	static void printToTalStudent() {
		cout << totalStudents << endl;
	}
};
int Lesson::totalStudents = 0;
int main() {
	Lesson math("math", 10);
	Lesson eng("eng", 30);

	Lesson::printToTalStudent();



	return 0;
}
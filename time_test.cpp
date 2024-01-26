#include<iostream>
#include<string>
using namespace std;

class Time {
private:
	int sec;
	int min;
	int Hour;
public:
	Time() {
		this->sec=0;
		this->min=0;
		this->Hour=0;
	}
	void whatTime() {
		cout << (Hour < 10 ? "0" : "") << Hour << " : "
			<<(min < 10 ? "0" : "") << min << " : "
			<< (sec < 10 ? "0" : "") << sec << " : " << endl;
	}
	void plussec() {
		this->sec++;
		if (this->sec == 60) {
			this->sec = 0;
			this->plusMin();
		}
	}
	void plusMin() {
		this->min++;
		if (this->min == 60) {
			this->min = 0;
			this->plusHour();
		}
	}
	void plusHour() {
		this->Hour++;
		if (this->Hour == 24) {
			this->Hour = 0;
		}
	}


};
int main() {

	Time time;
	for (int i = 0; i < 2000000; i++) {
		time.whatTime();
		time.plussec();
	}




	return 0;
}


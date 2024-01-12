#include<stdio.h>
#include<stdlib.h>
typedef struct hamburger {
	char name[50];
	int price;
	double kcal;

}ham;
int main() {
	ham mac[10] = {
		{"cheese burger",3000,320},
		{"chicken berger",3500,380},
	};

	double* pd;
	pd=(double*)malloc(sizeof(double) * 10);

	ham* ppd;
	ppd = (ham*)malloc(sizeof(ham) * 10);

	





	return 0;
}
#include <stdio.h>

int main() {

	//int age;
	//printf("나이 입력:");
	//scanf_s("%d",&age); //&(앰퍼샌드) 필수!
	//printf("당신이 입력한 숫자: %d", age);
	

	//int side;
	//printf("정사각형의 한변의 길이");
	//scanf_s("%d", &side);
	//printf("정사각형의 넓이 :%d", side * side);

	double r;
	printf("원의 반지름 길이 입력 : ");
	scanf_s("%lf", &r);
	printf("원의 넓이 : %.2lf\n", r * r * 3.14);

	int year;
	printf("태어난 년도 입력 : ");
	scanf_s("%d", &year);
	printf("당신이 태어난 년도:%d\n", year);





	return 0;
}
#include<stdio.h>
int main() {

	int year;
	printf("태어난 년도를 입력하세요 :");
	scanf_s("%d", &year);
	printf("만 나이 : %d\n", 2023 - year);

	double a, b, c;
	printf("첫번째 수 : ");
	scanf_s("%lf", &a);
	printf("두번째 수 : ");
	scanf_s("%lf", &b);
	printf("세번째 수 : ");
	scanf_s("%lf", &c);
	printf("평균 : %lf\n", (a + b + c) /3 );

	double KRW;
	printf("원화를 입력하세요");
	scanf_s("%lf", &KRW);
	printf("엔화 : %lf\n", KRW * 0.11);

	double KM;
	printf("KM를 입력하세요 : ");
	scanf_s("%lf", &KM);
	printf("변환된 마일 :%lf\n", KM * 0.621371);

	double temp;
	printf("섭씨온도를 입력하세요");
	scanf_s("%lf", &temp);
	printf("화씨온도 : %.2lf\n", temp * 59 + 32);

	double weight;
	double height;
	printf("몸무게:");
	scanf_s("%lf", &weight);
	printf("키");
	scanf_s("%lf", &height);
	printf("bmi : %lf", weight / (height * height));







	return 0;
}
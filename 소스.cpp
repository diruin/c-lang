#include<stdio.h>
int main() {

	//int a;

	//printf("0부터 99999사이의 수를 입력하세요 :");
	//scanf_s("%d", &a);
	//int num = a / 10000;
	//int ten_thounsand = a % 10000 / 1000;
	//int Th = a % 1000 / 100;
	//int H = a % 100 / 10;
	//int T = a % 10;
	//printf("%d 만", num);
	//printf("%d 천", ten_thounsand);
	//printf("%d 백", Th);
	//printf("%d 십", H);
	//printf("%d", T);

	/*int a;

	printf("양의 정수를 입력하세요:");
	scanf_s("%d", &a);
	int H = a / 3600;
	int M = a %3600/60;
	int S = a % 60;
	printf("%d시%d분%d초", H,M,S);*/

	//int b;
	//printf("10000부터 99999사이의 양의 정수를 입력하세요");
	//scanf_s("%d", &b);
	//int c = b % 1000 / 100;
	//printf("100의 자리수는 %d 입니다", c);

	/*int a;
	printf("10000 부터 99999 사이의 양의 정수를 입력하세요");
	scanf_s("%d", &a);
	int b = a % 100 >= 50 ? (a / 100 + 1)*100:a / 100*100;
	printf("반올림한 값은%d", b);*/

	int a;
	printf("정수를 입력하세요 :");
	scanf_s("%d", &a);
	int b = (20 <= a <= 30) ? 1 : 0;
	printf("%d", b);








	return 0;
}
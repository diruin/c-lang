#include<stdio.h>
int main() {

	//제어문
	//1.조건문
	//조건이 충족되면 이코드 실행 ㄱ
	// 조건이 충족이 안되면 넘어가셈

	//1)if문
	//int num;
	//printf("정수를 입력하셈");
	//scanf_s("%d", &num);
	//if (0 < num) {
	//	printf("입력하신 숫자는 양의 정수입니다.\n");
	//}
	//printf("프로그램 끝");

	//int num;
	//printf("정수를 입력하세요 :");
	//scanf_s("%d", &num);
	//if (num%2==0) {
	//	printf("짝수임");
	//}

	//2.if -else
	//int height;

	//printf("키를 입력하세요");
	//scanf_s("%d", &height);
	//if (height > 140) {
	//	printf("놀이기구를 탈수 있습니다.");
	//}
	//else {
	//	printf("놀이기구를 탈수 X");
	//}
	/*int num;
	printf("수를 입력하세요");
	scanf_s("%d", &num);
	if (num%2==0){
		printf("짝수입니다");
	}
	else {
		printf("짝수가 아닙니다");
	}*/

	//if -else if -else
	/*int num;
	printf("숫자입력 : ");
	scanf_s("%d", &num);
	if (num > 0) {
		printf("양의정수");
	}
	else if (num == 0) {
		printf("0입니다");
	}
	else {
		printf("음의정수");
	}*/

	//int num;
	//printf("시험성적을 입력하세요");
	//scanf_s("%d", &num);
	//if (90 <= num && num <= 100) {
	//	printf("A 입니다");
	//}
	//else if (80 <= num && num < 90) {
	//	printf("B 입니다");
	//}
	//else if (70 <= num && num < 80) {
	//	printf("C 입니다");
	//}
	//else {
	//	printf("F 입니다");
	//}

	//4.nested - if문
	
	/*int a = 1;
	if (a > 0) {
		printf("양수입니다");
		if (a < 10) {
			printf("10보다 작습니다");
		}
	}
	else {
		printf("0또는 음수입니다");
	}
	*//*
	int a ;
	scanf_s("%d", &a);
	if (a > 0) {
		if(a%2==0){
			printf("양의 짝수입니다");
		}
		else {
			printf("양의 홀수입니다.");
		}
	}
	else if (a == 0) {
		printf("0입니다");
	}
	else {
		if (a % 2 == 0) {
			printf("음의 짝수입니다");
		}
		else {
			printf("음의 홀수입니다.");
		}
	}*/











	return 0;
}
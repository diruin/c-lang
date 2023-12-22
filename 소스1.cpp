#include<stdio.h>
int main() {

	/*char a;
	printf("문자를 입력하세요");
	scanf_s("%c", &a);
	if (65 <= a && a <= 90) {
		printf("대문자");
	}
	else if (97 <= a && a <= 122) {
		printf("소문자");
	}
	else if (48 <= a && a <= 57) {
		printf("숫자");
	}
	else {
		printf("기타");
	}*/


	/*int C;
	printf("현재 온도를 입력하세요");
	scanf_s("%d", &C);
	if (C < 0) {
		printf("추움 실내 활동 ㄱ");
	}
	else if (0 <= C && C < 40) {
		printf("쾌적 실외 ㄲ");
	}
	else {
		printf("더움 실내 권장 ㄱ");
	}*/
	//int a, b;
	//printf("첫번째 양의 정수를 입력하세요");
	//scanf_s("%d", &a);
	//printf("두번째 양의 정수를 입력하세요");
	//scanf_s("%d", &b);
	//if (a > b) {
	//	if (b * b == a) {
	//		printf("%d*%d=%d",b,b,a);
	//	}
	//	else {
	//		printf("none");
	//	}
	//}
	//else {
	//	if (a * a == b) {
	//		printf("%d*%d=%d",a,a,b);
	//	}
	//	else {
	//		printf("none");
	//	}

	//}

	int a, b, c, d, e;

	printf("정수를 입력");
	scanf_s("%d", &a);
	printf("정수를 입력");
	scanf_s("%d", &b);
	printf("정수를 입력");
	scanf_s("%d", &c);
	printf("정수를 입력");
	scanf_s("%d", &d);
	printf("정수를 입력");
	scanf_s("%d", &e);
	if (a >= 0) {
		if (b >= 0) {
			if (c >= 0) {
				if (d >= 0) {
					if (e >= 0) {
						printf("양수의 합 : %d", a + b + c + d + e);
					}
				}
			}
		}
	}




	return 0;
}
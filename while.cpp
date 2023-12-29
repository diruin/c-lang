#include<stdio.h>
int main() {
	//while 문
	/*while 문 제어하기
	1. 조건제작*/
	//int a = 0;
	//while (a < 5) {
	//	printf("%d\n", a);
	//	a++;
	//}
	////2.break문 활용
	////1==true and 0==false
	//int b;
	//while (1) {
	//	printf("숫자 3 을 입력해야 끝남");
	//	printf("숫자입력 ");
	//	scanf_s("%d", &b);
	//	if (b == 3)break;
	//}

	//do-while 문
	//int a = 10;
	//do {
	//	printf("countdown : %d!\n", a);
	//	a--;
	//} while (a > 0);
	//printf("끝");

	//int num = 1;
	//while (num <= 10) {
	//	printf("%d\n", num);
	//	num++;
	//}
	////printf("-----------------\n");
	//int sum = 0;
	//int NUM;
	//printf("정수를 입력하세요 ( 0 입력시 종료):");
	//while (1) {
	//	scanf_s("%d", &NUM);
	//	if (NUM == 0) {
	//		break;
	//	}
	//	sum += NUM;
	//}
	//printf("누적합 = %d\n", sum);

	/*int n;
	int l=1;
	printf("정수를 입력하세요");
	scanf_s("%d", &n);
	while (1<=n){
		if (n % l == 0) {
			printf("%d\n", n / l);
		}
		l++;
	}*/

	//int a;
	//int b = 0;
	//while (1) {
	//	printf("정수를 입력하세요");
	//	scanf_s("%d", &a);
	//	b += a;
	//	if (a == 0)break;
	//}
	//printf("%d", b);


	//int a;
	//int b;
	//printf("정수를 입력하세요");
	//scanf_s("%d", &b);
	//while (1) {
	//	printf("정답을 입력");
	//	scanf_s("%d", &a);
	//	if (a < b) {
	//		printf("up");
	//	}
	//	else if (a > b) {
	//		printf("down");
	//	}
	//	else break;
	//}

	//int n;
	//int m;
	//int l;
	//printf("정수 n 을 입력하세요");
	//scanf_s("%d", &n);
	//printf("정수 m 을 입력하세요");
	//scanf_s("%d", &m);
	//while (m != 0) {
	//	l = n % m;
	//	n = m;
	//	m = l;
	//}
	//printf("%d", n);
	int a;
	printf("계산기\n1.더하기\n2.빼기\n3.곱하기\n4.나누기\n5.종료\n");
	scanf_s("%d", &a);
	while (a != 5) {
		
		if (a == 1) {
			int b, c;
			printf("두 정수를 입력하세요 :\n ");
			scanf_s("%d", &b);
			getchar();
			scanf_s("%d", &c);
			printf("%d", b + c);
			break;
		}
		else if (a == 2) {
			int d, e;
				printf("두 정수를 입력하세요 :\n ");
			scanf_s("%d", &d);
			getchar();
			scanf_s("%d", &e);
			printf("%d", d - e);
			break;
		}
		else if (a == 3) {
			int f, g;
				printf("두 정수를 입력하세요 :\n ");
			scanf_s("%d", &f);
			getchar();
			scanf_s("%d", &g);
			printf("%d", f * g);
			break;
		}
		else if (a == 4) {
			int h, i;
				printf("두 정수를 입력하세요 :\n ");
			scanf_s("%d", &h);
			getchar();
			scanf_s("%d", &i);
			printf("몫 : %d 나머지 : % d\n", h / i,h%i);
			break;
		}
		else {
			printf("잘못입력\n");
			break;
		}
	}











	return 0;
}
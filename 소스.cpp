#include<stdio.h>
int main() {


	/*int N;
	printf("정수를 입력하세요");
	scanf_s("%d", &N);
	int n = 20 < N && N < 30 ? 1 : 0;
	printf("%d", n);*/

	/*int a;
	printf("양의 정수를 입력하세요");
	scanf_s("%d", &a);
	int b = (a % 2 == 0) ? 0 : 1;
	printf("결과 :%d", b);*/


	/*int n, m;

	printf("첫번째 양의정수를 입력하세요");
	scanf_s("%d", &n);
	printf("두번째 양의정수를 입력하세요");
	scanf_s("%d", &m);
	int M = n > m ? n : m;
	printf("%d", M);*/

	int a, b;
	printf("첫번째 양의정수를 입력하세요");
	scanf_s("%d", &a);
	printf("두번째 양의 정수를 입력하세요");
	scanf_s("%d", &b);
	int M = a > b ? a / b : b / a;
	int N = a > b ? a % b : b % a;
	printf("몫 :%d\n", M);
	printf("나머지 :%d\n", N);


	






	return 0;
}
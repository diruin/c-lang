#include <stdio.h>
int main() {
	//두개의 수를 입력받고 두수의 합, 차 , 곱을 나타내는 프로그램
	int a;
	int b;
	printf("첫번째 수");
	scanf_s("%d", &a);
	printf("두번째 수");
	scanf_s("%d", &b);
	printf("두수의 합 = %d\n", a + b);
	printf("두수의 차= %d\n", a - b);
	printf("두수의 곱 = %d\n", a * b);
	


	//나이를 입력 받고 
	//태어난 년도를 나타내는 프로그램
	int c;
	printf("나이를 입력하세요");
	scanf_s("%d", &c);
	printf("태어난 년도 : %d",2024 - c);



	return 0;
}
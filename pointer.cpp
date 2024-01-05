#include<stdio.h>

int main() {


	//포인터 (주소 참조 연산자)
	//그 주소를 갖는 변수의 값을 알려줌
	int a = 10;
	int* pa;
	pa = &a;
	printf("%d", *pa);



	return 0;
}
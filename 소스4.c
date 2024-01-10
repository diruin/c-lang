#include<stdio.h>/*
void wordChange(char data[][10]) {
	int num;
	int num1;
	char alpha;
	printf("바꾸고싶은단어 ( 0~3)");
	scanf_s("%d", &num);
	getchar();
	printf("%s\n", data[num]);
	printf("바꾸고싶은 번째");
	scanf_s("%d", &num1);
	getchar();
	printf("바꾸고싶은 스펠링");
	scanf_s("%c", &alpha);
	data[(num-1)][(num1-1)] = alpha;
}*/

int main() {

	//char coffee[4][10] = {
	//	"americano",
	//	"latte",
	//	"valina",
	//	"hazelnuts"
	//};
	//printf("%d\n", coffee);
	//wordChange(coffee);
	//printf("%s\n", coffee[0]);
	//printf("%s\n", coffee[1]);
	//printf("%s\n", coffee[2]);
	//printf("%s\n", coffee[3]);

	char a[] = "ice";
	char* pa = a;
	printf("%s", a);
	

	return 0;
}
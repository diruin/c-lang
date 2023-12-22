#include<stdio.h>
int main() {

	//char a = 'A';
	//printf("%c\n", a);//A
	//printf("%d\n", a);//65

	/*char a;
	printf("대문자를 입력하세요 : ");
	scanf_s("%c", &a);
	char b = a + 32;
	printf("%c", b);*/

	char a;
	printf("문자를 입력하세요 :");
	scanf_s("%c", &a);
	int b = (65 <= a && a <= 90) || (97 <= a && a<= 122) ? 1 : 0 ;
	printf("%d", b);



	return 0;
}
#include<stdio.h>
#include<string.h>
int main() {
	char str0[] = "mega";
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Hi";
	//str1 과 str2 비교후 결과 출력
	printf("%d\n", strcmp(str1, str2));//0반환(문자열이 같음)
	//str1과 str3 비교후 결과 출력
	printf("%d\n", strcmp(str1, str3));//-1 반환 ( 문자열이 다름)
	printf("%d\n", strcmp(str0, str1));//1 반환 ( 문자열이 다름)


	return 0;
}
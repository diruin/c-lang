#include<stdio.h>

typedef int length;
typedef char* String;

typedef struct Book {
	char name[30];
	char genre[30];
	int price;
}Book;
int main() {
	length a = 5;
	String name = "megastudy";
	String car[3] = { "tesla","kia","hyundai" };
	Book javaBook;

	return 0;
}
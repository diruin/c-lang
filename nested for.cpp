#include<stdio.h>
int main() {/*
	int sum;
	for (int i = 2; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
		}
	}*/


	//int n;
	//printf("정수를 입력하세요 : ");
	//scanf_s("%d", &n);
	//for (int m = 0; m < n; m++) {
	//	for (int l = 0; l < n; l++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	int n;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &n);
	for (int m = 0; m < n; m++) {
		for (int l = 0; l < n; l++) {
			if (m > l) continue;
			printf("*");
		}
		printf("\n");
	}








	return 0;
}
#include<stdio.h>
int main() {
	/*int num[5];
	double avg;
	int sum = 0;
	for (int i = 0; i < (sizeof(num) / sizeof(int)); i++) {
		printf("정수를 입력하세요 : ");
		scanf_s("%d",&num[i]);
		sum+=num[i];
	}
	avg=(double)sum/5;
		for (int i = 0; i < (sizeof(num) / sizeof(int)); i++) {
			if (avg < num[i]) {
				printf("%d\n",num[i]);
			}
	}*/


	//2. 배열에 5개의 정수를 입력받고 저장뒤 제일 큰수와 두번째 큰수 출력하기

	int num[5];
	for (int i = 0; i < (sizeof(num) / sizeof(int)); i++) {
		printf("정수입력");
		scanf_s("%d", &num[i]);
		
	}






	


	return 0;
}
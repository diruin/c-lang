#include<stdio.h>
int main() {
	/*int num[5];
	double avg;
	int sum = 0;
	for (int i = 0; i < (sizeof(num) / sizeof(int)); i++) {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d",&num[i]);
		sum+=num[i];
	}
	avg=(double)sum/5;
		for (int i = 0; i < (sizeof(num) / sizeof(int)); i++) {
			if (avg < num[i]) {
				printf("%d\n",num[i]);
			}
	}*/


	//2. �迭�� 5���� ������ �Է¹ް� ����� ���� ū���� �ι�° ū�� ����ϱ�

	int num[5];
	for (int i = 0; i < (sizeof(num) / sizeof(int)); i++) {
		printf("�����Է�");
		scanf_s("%d", &num[i]);
		
	}






	


	return 0;
}
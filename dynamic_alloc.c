// ���� �Ҵ�
#include<stdio.h>
#include<stdlib.h>





int main() {
	int size;
	printf("��ȭ��ȣ�� ������ ? : ");
	scanf_s("%d", &size);

	int* arr;


	arr=(int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < size; i++) {
		printf("%d\n",arr[i]);
	}


	return 0;
}
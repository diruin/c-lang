#include <stdio.h>
int main() {
	//�ΰ��� ���� �Է¹ް� �μ��� ��, �� , ���� ��Ÿ���� ���α׷�
	int a;
	int b;
	printf("ù��° ��");
	scanf_s("%d", &a);
	printf("�ι�° ��");
	scanf_s("%d", &b);
	printf("�μ��� �� = %d\n", a + b);
	printf("�μ��� ��= %d\n", a - b);
	printf("�μ��� �� = %d\n", a * b);
	


	//���̸� �Է� �ް� 
	//�¾ �⵵�� ��Ÿ���� ���α׷�
	int c;
	printf("���̸� �Է��ϼ���");
	scanf_s("%d", &c);
	printf("�¾ �⵵ : %d",2024 - c);



	return 0;
}
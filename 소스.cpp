#include<stdio.h>
int main() {


	/*int N;
	printf("������ �Է��ϼ���");
	scanf_s("%d", &N);
	int n = 20 < N && N < 30 ? 1 : 0;
	printf("%d", n);*/

	/*int a;
	printf("���� ������ �Է��ϼ���");
	scanf_s("%d", &a);
	int b = (a % 2 == 0) ? 0 : 1;
	printf("��� :%d", b);*/


	/*int n, m;

	printf("ù��° ���������� �Է��ϼ���");
	scanf_s("%d", &n);
	printf("�ι�° ���������� �Է��ϼ���");
	scanf_s("%d", &m);
	int M = n > m ? n : m;
	printf("%d", M);*/

	int a, b;
	printf("ù��° ���������� �Է��ϼ���");
	scanf_s("%d", &a);
	printf("�ι�° ���� ������ �Է��ϼ���");
	scanf_s("%d", &b);
	int M = a > b ? a / b : b / a;
	int N = a > b ? a % b : b % a;
	printf("�� :%d\n", M);
	printf("������ :%d\n", N);


	






	return 0;
}
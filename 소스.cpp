#include<stdio.h>
int main() {

	//int a;

	//printf("0���� 99999������ ���� �Է��ϼ��� :");
	//scanf_s("%d", &a);
	//int num = a / 10000;
	//int ten_thounsand = a % 10000 / 1000;
	//int Th = a % 1000 / 100;
	//int H = a % 100 / 10;
	//int T = a % 10;
	//printf("%d ��", num);
	//printf("%d õ", ten_thounsand);
	//printf("%d ��", Th);
	//printf("%d ��", H);
	//printf("%d", T);

	/*int a;

	printf("���� ������ �Է��ϼ���:");
	scanf_s("%d", &a);
	int H = a / 3600;
	int M = a %3600/60;
	int S = a % 60;
	printf("%d��%d��%d��", H,M,S);*/

	//int b;
	//printf("10000���� 99999������ ���� ������ �Է��ϼ���");
	//scanf_s("%d", &b);
	//int c = b % 1000 / 100;
	//printf("100�� �ڸ����� %d �Դϴ�", c);

	/*int a;
	printf("10000 ���� 99999 ������ ���� ������ �Է��ϼ���");
	scanf_s("%d", &a);
	int b = a % 100 >= 50 ? (a / 100 + 1)*100:a / 100*100;
	printf("�ݿø��� ����%d", b);*/

	int a;
	printf("������ �Է��ϼ��� :");
	scanf_s("%d", &a);
	int b = (20 <= a <= 30) ? 1 : 0;
	printf("%d", b);








	return 0;
}
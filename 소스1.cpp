#include<stdio.h>
int main() {

	/*char a;
	printf("���ڸ� �Է��ϼ���");
	scanf_s("%c", &a);
	if (65 <= a && a <= 90) {
		printf("�빮��");
	}
	else if (97 <= a && a <= 122) {
		printf("�ҹ���");
	}
	else if (48 <= a && a <= 57) {
		printf("����");
	}
	else {
		printf("��Ÿ");
	}*/


	/*int C;
	printf("���� �µ��� �Է��ϼ���");
	scanf_s("%d", &C);
	if (C < 0) {
		printf("�߿� �ǳ� Ȱ�� ��");
	}
	else if (0 <= C && C < 40) {
		printf("���� �ǿ� ��");
	}
	else {
		printf("���� �ǳ� ���� ��");
	}*/
	//int a, b;
	//printf("ù��° ���� ������ �Է��ϼ���");
	//scanf_s("%d", &a);
	//printf("�ι�° ���� ������ �Է��ϼ���");
	//scanf_s("%d", &b);
	//if (a > b) {
	//	if (b * b == a) {
	//		printf("%d*%d=%d",b,b,a);
	//	}
	//	else {
	//		printf("none");
	//	}
	//}
	//else {
	//	if (a * a == b) {
	//		printf("%d*%d=%d",a,a,b);
	//	}
	//	else {
	//		printf("none");
	//	}

	//}

	int a, b, c, d, e;

	printf("������ �Է�");
	scanf_s("%d", &a);
	printf("������ �Է�");
	scanf_s("%d", &b);
	printf("������ �Է�");
	scanf_s("%d", &c);
	printf("������ �Է�");
	scanf_s("%d", &d);
	printf("������ �Է�");
	scanf_s("%d", &e);
	if (a >= 0) {
		if (b >= 0) {
			if (c >= 0) {
				if (d >= 0) {
					if (e >= 0) {
						printf("����� �� : %d", a + b + c + d + e);
					}
				}
			}
		}
	}




	return 0;
}
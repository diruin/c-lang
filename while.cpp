#include<stdio.h>
int main() {
	//while ��
	/*while �� �����ϱ�
	1. ��������*/
	//int a = 0;
	//while (a < 5) {
	//	printf("%d\n", a);
	//	a++;
	//}
	////2.break�� Ȱ��
	////1==true and 0==false
	//int b;
	//while (1) {
	//	printf("���� 3 �� �Է��ؾ� ����");
	//	printf("�����Է� ");
	//	scanf_s("%d", &b);
	//	if (b == 3)break;
	//}

	//do-while ��
	//int a = 10;
	//do {
	//	printf("countdown : %d!\n", a);
	//	a--;
	//} while (a > 0);
	//printf("��");

	//int num = 1;
	//while (num <= 10) {
	//	printf("%d\n", num);
	//	num++;
	//}
	////printf("-----------------\n");
	//int sum = 0;
	//int NUM;
	//printf("������ �Է��ϼ��� ( 0 �Է½� ����):");
	//while (1) {
	//	scanf_s("%d", &NUM);
	//	if (NUM == 0) {
	//		break;
	//	}
	//	sum += NUM;
	//}
	//printf("������ = %d\n", sum);

	/*int n;
	int l=1;
	printf("������ �Է��ϼ���");
	scanf_s("%d", &n);
	while (1<=n){
		if (n % l == 0) {
			printf("%d\n", n / l);
		}
		l++;
	}*/

	//int a;
	//int b = 0;
	//while (1) {
	//	printf("������ �Է��ϼ���");
	//	scanf_s("%d", &a);
	//	b += a;
	//	if (a == 0)break;
	//}
	//printf("%d", b);


	//int a;
	//int b;
	//printf("������ �Է��ϼ���");
	//scanf_s("%d", &b);
	//while (1) {
	//	printf("������ �Է�");
	//	scanf_s("%d", &a);
	//	if (a < b) {
	//		printf("up");
	//	}
	//	else if (a > b) {
	//		printf("down");
	//	}
	//	else break;
	//}

	//int n;
	//int m;
	//int l;
	//printf("���� n �� �Է��ϼ���");
	//scanf_s("%d", &n);
	//printf("���� m �� �Է��ϼ���");
	//scanf_s("%d", &m);
	//while (m != 0) {
	//	l = n % m;
	//	n = m;
	//	m = l;
	//}
	//printf("%d", n);
	int a;
	printf("����\n1.���ϱ�\n2.����\n3.���ϱ�\n4.������\n5.����\n");
	scanf_s("%d", &a);
	while (a != 5) {
		
		if (a == 1) {
			int b, c;
			printf("�� ������ �Է��ϼ��� :\n ");
			scanf_s("%d", &b);
			getchar();
			scanf_s("%d", &c);
			printf("%d", b + c);
			break;
		}
		else if (a == 2) {
			int d, e;
				printf("�� ������ �Է��ϼ��� :\n ");
			scanf_s("%d", &d);
			getchar();
			scanf_s("%d", &e);
			printf("%d", d - e);
			break;
		}
		else if (a == 3) {
			int f, g;
				printf("�� ������ �Է��ϼ��� :\n ");
			scanf_s("%d", &f);
			getchar();
			scanf_s("%d", &g);
			printf("%d", f * g);
			break;
		}
		else if (a == 4) {
			int h, i;
				printf("�� ������ �Է��ϼ��� :\n ");
			scanf_s("%d", &h);
			getchar();
			scanf_s("%d", &i);
			printf("�� : %d ������ : % d\n", h / i,h%i);
			break;
		}
		else {
			printf("�߸��Է�\n");
			break;
		}
	}











	return 0;
}
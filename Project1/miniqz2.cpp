#include<stdio.h>
int main() {

	int year;
	printf("�¾ �⵵�� �Է��ϼ��� :");
	scanf_s("%d", &year);
	printf("�� ���� : %d\n", 2023 - year);

	double a, b, c;
	printf("ù��° �� : ");
	scanf_s("%lf", &a);
	printf("�ι�° �� : ");
	scanf_s("%lf", &b);
	printf("����° �� : ");
	scanf_s("%lf", &c);
	printf("��� : %lf\n", (a + b + c) /3 );

	double KRW;
	printf("��ȭ�� �Է��ϼ���");
	scanf_s("%lf", &KRW);
	printf("��ȭ : %lf\n", KRW * 0.11);

	double KM;
	printf("KM�� �Է��ϼ��� : ");
	scanf_s("%lf", &KM);
	printf("��ȯ�� ���� :%lf\n", KM * 0.621371);

	double temp;
	printf("�����µ��� �Է��ϼ���");
	scanf_s("%lf", &temp);
	printf("ȭ���µ� : %.2lf\n", temp * 59 + 32);

	double weight;
	double height;
	printf("������:");
	scanf_s("%lf", &weight);
	printf("Ű");
	scanf_s("%lf", &height);
	printf("bmi : %lf", weight / (height * height));







	return 0;
}
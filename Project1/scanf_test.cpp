#include <stdio.h>

int main() {

	//int age;
	//printf("���� �Է�:");
	//scanf_s("%d",&age); //&(���ۻ���) �ʼ�!
	//printf("����� �Է��� ����: %d", age);
	

	//int side;
	//printf("���簢���� �Ѻ��� ����");
	//scanf_s("%d", &side);
	//printf("���簢���� ���� :%d", side * side);

	double r;
	printf("���� ������ ���� �Է� : ");
	scanf_s("%lf", &r);
	printf("���� ���� : %.2lf\n", r * r * 3.14);

	int year;
	printf("�¾ �⵵ �Է� : ");
	scanf_s("%d", &year);
	printf("����� �¾ �⵵:%d\n", year);





	return 0;
}
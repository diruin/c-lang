#include <stdio.h>

int main() {
	//double base;
	//double height;

	//base = 10;
	//height = 3;

	//printf("���ﰢ���� ���̴� %.2lf*%.2lf*0.5=%.2lf", base, height,base*height*0.5);

	//���簢�� ����
	//���� ����
	//���� �ѷ�

	double base;
	double r;

	base = 10;
	r = 3;

	printf("���簢���� ���̴� %.2lf*%.2lf=%.2lf\n", base, base, base * base);
	printf("���� ���̴� %.2lf*%.2lf*3.14=%.2lf\n", r, r, r*r*3.14);
	printf("���� �ѷ��� %.2lf*2*3.14=%.2lf\n", r, 2*r*3.14);



	return 0;
}
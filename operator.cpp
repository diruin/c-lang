#include<stdio.h>
int main() {

	////��� ������
	//printf("%d\n", 1 + 3); //���� ������
	//printf("%d\n",1 - 3); //����
	//printf("%d\n", 1 * 3); // ����
	//printf("%d\n", 5 / 3); // ������(��)
	//printf("%d\n", 1 % 3); //������ ( ������)

	////���� ������
	//int a = 100; //= �����Ѵ�
	////a = a + 300;// 500
	//a += 300; //500
	//

	//int b = 100;
	////b = b - 50;
	//b -= 50;

	//int c = 10;
	////c = c * 10;
	//c *= 10;

	//printf("a:%d, b:%d c:%c", a, b, c);


	//�� ������
	//>,<,>=, <=, ==(����), != (�ٸ���)
	//c ���� ���� 1, ������ 0 ��Ÿ����.
	/*printf("3>1%d\n", 3 > 1);
	printf("3<1%d\n", 3 < 1);*/

	//���� ������
	//&&(and), ||(or), !(not)
	int a = 10;
	int b = 5;
	int c = 3;

	//&&�� Ư¡�� ��� ���̿��߸� ���� ���´�.
	printf("result : %d\n", a > b && b > c);
	//||�� Ư¡�� �ϳ��� ���̸� ���� ���´�.
	printf("result : %d\n", a<b || b>c);
	//!�� Ư¡�� �ݴ� �����
	printf("result:%d\n", !(a > b));




	return 0;
}
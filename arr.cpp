#include<stdio.h>
int main() {

	/*printf("%d\n", sizeof(coffee_prices) / sizeof(int));
	for (int i = 0; i < sizeof(coffee_prices) / sizeof(int); i++) {
		printf("%d��° Ŀ�ǰ����� :%d�Դϴ�.\n", i + 1, coffee_prices[i]);
	}*/

	//int this_week_tempers[7] = { 21,16,13,14,15,26,11 };
	//int coffee_prices[4] = { 2000,3000,3500,3500 };
	////�迭 ���� ���� �ʱ�ȭ �ϱ�
	//int heights[] = { 155,151,152,153 };
	//int weights[4];

	//for (int i = 0; i < (sizeof(weights) / sizeof(int)); i++) {
	//	int weight;
	//	printf("%d ��° ������ �Է� :", i + 1);
	//	scanf_s("%d", &weight);
	//	weights[i] = weight;
	//}

	//for (int i = 0; i < (sizeof(weights) / sizeof(int)); i++) {
	//	int weight;
	//	printf("%d ��° �����Դ� %d �Դϴ�\n", i + 1,weights[i]);
	//}


	int score[5];
	double avg;
	int sum = 0;
	for (int i = 0; i < (sizeof(score) / sizeof(int)); i++) {
		printf("%d��° ���� ������ �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	avg = (double)sum / 5;
	printf("���� ����� : %.2lf �Դϴ�", avg);



	return 0;
}
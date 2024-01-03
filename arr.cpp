#include<stdio.h>
int main() {

	/*printf("%d\n", sizeof(coffee_prices) / sizeof(int));
	for (int i = 0; i < sizeof(coffee_prices) / sizeof(int); i++) {
		printf("%d번째 커피가격은 :%d입니다.\n", i + 1, coffee_prices[i]);
	}*/

	//int this_week_tempers[7] = { 21,16,13,14,15,26,11 };
	//int coffee_prices[4] = { 2000,3000,3500,3500 };
	////배열 갯수 없이 초기화 하기
	//int heights[] = { 155,151,152,153 };
	//int weights[4];

	//for (int i = 0; i < (sizeof(weights) / sizeof(int)); i++) {
	//	int weight;
	//	printf("%d 번째 몸무게 입력 :", i + 1);
	//	scanf_s("%d", &weight);
	//	weights[i] = weight;
	//}

	//for (int i = 0; i < (sizeof(weights) / sizeof(int)); i++) {
	//	int weight;
	//	printf("%d 번째 몸무게는 %d 입니다\n", i + 1,weights[i]);
	//}


	int score[5];
	double avg;
	int sum = 0;
	for (int i = 0; i < (sizeof(score) / sizeof(int)); i++) {
		printf("%d번째 과목 점수를 입력하세요 : ", i + 1);
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	avg = (double)sum / 5;
	printf("과목 평균은 : %.2lf 입니다", avg);



	return 0;
}
#include<stdio.h>
int main() {

	//int n=0;
	//int m;
	//int s = 0;
	//printf("양의정수를 입력하세요");
	//scanf_s("%d", &m);
	//while (1) {
	//	n++;
	//	s += n;
	//	if (n >= m)break;
	//}
	//printf("%d", s);

	int n;
	int i=0;
	int l = 0;
	double m;
	printf(" 0~100 까지 정수를 입력하세요\n");
	scanf_s("%d", &n);
	while (1) {
		int num;
		scanf_s("%d", % n);
		if (100 < num)continue;
		if (num <= 0)break;
		else{
			i++;
			l += n;
		}
	}
	m = (double)l / (double)i;
	printf("합 %d",l);
	printf("평균 %lf", m);


	return 0;
}
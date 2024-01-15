#include<stdio.h>




int main() {
	int num[7] = { 1,3,4,2,74,234,11 };
	for (int j = 0; j <(sizeof(num)/sizeof(int)-1); j++) {
		for (int k = 0; k < (sizeof(num) / sizeof(int)-j); k++) {
			if (num[k] > num[k + 1]) {
				int temp = num[k];
				num[k] = num[k + 1];
				num[k + 1] = temp;
			}
		}
	}
	for (int q = 0; q < sizeof(num) / sizeof(int); q++) {
		printf("%d ", num[q]);
	}






	return 0;
}
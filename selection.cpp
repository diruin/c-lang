#include<stdio.h>

int main() {
	
	int num[6] = { 3,2,4,5,6,1 };
	int size = sizeof(num) / sizeof(int);
	int min_idx, temp;

	for (int i = 0; i < size-1; i++) {
		min_idx = i;
		for (int j = i+1; j < size; j++) {
			if (num[j] < num[min_idx]) {
				min_idx = j;
			}
		}
		temp = num[min_idx];
		num[min_idx] = num[i];
		num[i] = temp;
	}
	
	for (int k = 0; k < sizeof(num) / sizeof(int); k++) {
		printf("%d", num[k]);
	}





	return 0;
}
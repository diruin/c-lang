#include<stdio.h>
int main() {
	int key, j;
	int arr[6] = { 4,7,23,42,34,11 };
	int size = sizeof(arr) / sizeof(int);
	for (int i = 1; i < size-1; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	for (int i = 0; i < size - 1; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
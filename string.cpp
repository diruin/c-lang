#include<stdio.h>
int main() {
	/*int a[10] = {1,2,3,4,5,6,7,8,9,10};

	char coffee[] = { 'a','m','e','r','i','c','a','n','o','\0' };
	char coffe1[] = "americano";
	for (int i = 0; i < 10; i++) {
		printf("%c", coffee[i]);
	}
	printf("\n");
	printf("%s", coffee);*/

	char coffee[] = "americano";
	
	for (int i = 0; i < sizeof(coffee)/sizeof(char); i++) {
		if (i % 2 == 1) {
			if (i == (sizeof(coffee) / sizeof(char) - 1)) {
				coffee[i] = '\0';
			}
			else coffee[i] = 'k';
		}
	}

	printf("%s", coffee);
	printf("\n");
	char coffee1[] = "americano";
	for (int i = 0; i < sizeof(coffee1) / sizeof(char); i++) {
		if (i % 2 == 0) {
			coffee1[i] = 'k';
		}

	}
	printf("%s", coffee1);



	return 0;
}
#include<stdio.h>
//datatype
int add(int x, int y) {

	return x + y;
}
int minus(int z, int r) {

	return z - r;
}
int multiply(int a, int b) {

	return a * b;
}
//void gojapan() {
//	printf("가고싶다\n");
//}
void swap(int *c, int *d ) {
	int e = *c;
	*c = *d;
	*d = e;
}
int main() {
	
	/*int a = add(10, 20);
	int b = minus(10, 5);
	int c = multiply(10, 10);
	printf("%d\n%d\n%d", a, b, c);*/
	int a=3;
	int b = 5;
	swap(&a, &b);
	printf("%d%d", a,b);



	return 0;
}
#include <stdio.h>

int main() {
	//double base;
	//double height;

	//base = 10;
	//height = 3;

	//printf("정삼각형의 넓이는 %.2lf*%.2lf*0.5=%.2lf", base, height,base*height*0.5);

	//정사각형 넓이
	//원의 넓이
	//원의 둘래

	double base;
	double r;

	base = 10;
	r = 3;

	printf("정사각형의 넓이는 %.2lf*%.2lf=%.2lf\n", base, base, base * base);
	printf("원의 넓이는 %.2lf*%.2lf*3.14=%.2lf\n", r, r, r*r*3.14);
	printf("원의 둘래는 %.2lf*2*3.14=%.2lf\n", r, 2*r*3.14);



	return 0;
}
#include<stdio.h>
int main() {

	//int a=10;
	//int* pa;
	//int** ppa;
	//pa = &a;
	//ppa = &pa;
	//printf("%d\n", **ppa);
	//printf("������ �Է��ϼ���\n");
	//scanf_s("%d", *ppa);
	//printf("%d", **ppa);


	/*int a[5] = { 0,1,2,3,4 };
	int* pa = a;
	
	printf("%d\n", &a[0]);
	printf("%d\n", pa);
	printf("%d\n", &a[1]);
	printf("%d\n", *(pa+1));

	
	*(pa + 2) = 10;
	printf("%d\n", *(pa+1));
	printf("%d\n", a[2]);*/

	/*char data[] = "megastudy";
	char* pc = data;
	*(pc + 3) = 'i';
	printf("%s", pc);*/

	/*char data[] = "megastudy";
	char* pc = data;
	int i;
	char a;
	printf("���°�� �ٲٽðڽ��ϱ�? : \n");
	scanf_s("%d", &i);
	printf("�������� �ٲٽðڽ��ϱ�? : \n");
	getchar();
	scanf_s("%c", &a);
	getchar();
	*(pc + (i-1)) = ("%c",a);
	printf("%s", pc);*/

	//int data[2][3] = { {1,2,3},{4,5,6} };
	//int* pa = data[0];
	//int** ppa;
	//ppa = &pa;
	//*(pa + 1) = 10;
	//printf("%d\n", data[0][1]);
	//pa = data[1];
	//*(*ppa + 2) = 20;
	//printf("%d\n", data[1][2]);
	//for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
	//	for (int j = 0; j < sizeof(data) / sizeof(int); j++) {
	//		printf("%d", data[i][j]);
	//	}
	//}


	int f;
	char fruits[3][10] = { "orange","apple","peach" };
	char* pf = fruits[0];
	char** ppf;
	ppf = &pf;
	int j;
	char n;
	for (int i = 0; i < 3; i++) {
		printf("���° ������ �ٲٽðڽ��ϱ�? : ");
		scanf_s("%d", &f);
		if (f == 1) {
			printf("���° ���ڸ� �ٲٽðڽ��ϱ�?");
			scanf_s("%d", &j);
			printf("� ���ڷ� �ٲٽðڽ��ϱ�?");
			getchar();
			scanf_s("%c", &n);
			getchar();
			*(*(ppf + (j-1))) = ("%c", n);
			printf("%s\n", *fruits);
		}
		else if (f == 2) {
			printf("���° ���ڸ� �ٲٽðڽ��ϱ�?");
			scanf_s("%d", &j);
			printf("� ���ڷ� �ٲٽðڽ��ϱ�?");
			getchar();
			scanf_s("%c", &n);
			getchar();
			*((pf+1) + (j - 1)) = ("%c", n);
			printf("%s", fruits[1]);
		}
		else if (f == 3) {
			printf("���° ���ڸ� �ٲٽðڽ��ϱ�?");
			scanf_s("%d", &j);
			printf("� ���ڷ� �ٲٽðڽ��ϱ�?");
			getchar();
			scanf_s("%c", &n);
			getchar();
			*(*(ppf+2) + (j - 1)) = ("%c", n);
			printf("%s", fruits[2]);
		}
		printf("%s", fruits);
	}


	





	return 0;
}
#include<stdio.h>
#include<string.h>
int main() {
	char str0[] = "mega";
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Hi";
	//str1 �� str2 ���� ��� ���
	printf("%d\n", strcmp(str1, str2));//0��ȯ(���ڿ��� ����)
	//str1�� str3 ���� ��� ���
	printf("%d\n", strcmp(str1, str3));//-1 ��ȯ ( ���ڿ��� �ٸ�)
	printf("%d\n", strcmp(str0, str1));//1 ��ȯ ( ���ڿ��� �ٸ�)


	return 0;
}
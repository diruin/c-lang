#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct coffee {
	char name[10];
	int price;
	struct Node* next;
}coffee;


typedef struct Node {
	coffee data;
	struct Node* next;
}Node;

Node* createNode() {
	Node* newNode = (Node*)malloc(sizeof(Node));
	char name[50];
	scanf("%s", &name);
	getchar();
	int num;
	printf("가격입력 : ");
	scanf("%D", &num);
	strcpy(newNode->data.name, name);
	newNode->data.price = num;
	newNode->next = NULL;
	return newNode;
}
void appendNode(Node** head) {
	Node*
}



int main() {
	
	Node* head ;

	head = (Node*)malloc(sizeof(Node));

	head->a.name = { 'ame' };
	head->a.price = 1300;
	

	



}



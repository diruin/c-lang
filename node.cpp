#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node* next;
}Node;
Node* createNode() {
	int num;
	Node* newNODE = (Node*)malloc(sizeof(Node));
	printf("숫자입력 : ");
	scanf("%d", &num);
	newNODE->data = num;
	newNODE->next = NULL;

	return newNODE;
}
void appendNode(Node** head) {
	Node* newNODE = createNode();
	if (*head == NULL) {
		*head == newNODE;
		return;
	}
	Node* temp = *head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNODE;
}





int main() {
	
	Node* head=NULL;

	appendNode(&head);
	appendNode(&head);
	appendNode(&head);
	appendNode(&head);



	//head = (NODE*)malloc(sizeof(NODE));


	//head->data = 10;
	////head->next = NULL;
	//mallloc(head);

	////head->next= (NODE*)malloc(sizeof(NODE));
	//mallloc(head->next);
	//head->next->data = 20;
	//head->next->next = NULL;

	////head->next->next = (NODE*)malloc(sizeof(NODE));
	//mallloc(head->next->next);
	//head->next->next->data = 40;
	//head->next->next->next = NULL;

	//head->next->next->next = (NODE*)malloc(sizeof(NODE));
	//head->next->next->next->data = 30;
	//head->next->next->next->next = NULL;
	//printf("%d %d %d\n", head->data, head->next->data,head->next->next->data);

	Node* horse;
	horse = head;

	while (horse != NULL) {
		printf("%d->", horse->head);
		horse = horse->next;
	}





	return 0;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

Node* createNode() {
	int num;
	Node* newNode = (Node*)malloc(sizeof(Node));
	printf("숫자입력 : ");
	scanf_s("%d", &num);
	newNode->data = num;
	newNode->next = NULL;

	return newNode;
}
void appendNode(Node** head) {
	Node* newNode = createNode();
	if (*head == NULL) {
		*head == newNode;
		return;
	}
	Node* temp = *head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}

void deleteLastNode(Node** head) {
	if (*head == NULL) {
		printf("삭제할것이 없어요\n");
		return;
	}
	else {
		Node* sercher = *head;
		Node* temp = NULL;
		while (sercher->next->next != NULL) {
			temp = sercher->next;
			deleteTarget = sercher->next->next->data;
			sercher = sercher->next;
		}
		printf("%d는 삭제되었습니다.", deleteTarget);
		temp->next = NULL;
	}
}



int main() {
	
	/*Node* head = NULL;

	head = (Node*)malloc(sizeof(Node));

	head->data = 10;
	head->next = NULL;

	head->next = (Node*)malloc(sizeof(Node));

	head->next->data = 20;
	head->next->next = NULL;

	head->next->next= (Node*)malloc(sizeof(Node));

	head->next->next->data = 30;
	head->next->next->next = NULL;

	Node* horse;
	horse = head;
	while (horse != NULL) {
		printf("%d \n", horse->data);
		horse = horse->next;
	}

	*/
	/*Node* head;
	Node* second;
	Node* t;
	Node* f;
	head = createNode();
	second = createNode();
	t = createNode();
	f = createNode();
	head->next = second;
	second->next = t;
	t->next = f;


	Node* sercher;
	sercher = head;
	while (sercher != NULL) {
		printf("%d->", sercher->data);
		sercher = sercher->next;
	}
	*/
	Node* head;
	while (1) {
		int code;
		printf("1.노드추가 2.노드삭제 3.종료\n");
		scanf("%d", &code);
		if (code == 1)
			appendNode(&head);
		else if (code == 2){}

		else if(code==3){}
		else printf("잘못입력하였습니다.\n");
	}


	while (1) {
		head = head->next;
		if (horse == NULL) {
			*horse = NULL;
		}
	}

	
	
	
	
	return 0;
}
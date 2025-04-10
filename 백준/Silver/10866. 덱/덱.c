#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Node {
	struct Node* prev, * next;
	int data;
}Node;
typedef struct Deque {
	struct Node* front, * rear;
	int size;
}Deque;
Node* getNode(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->next = node->prev = NULL;
	node->data = data;
	return node;
}
Deque* getDeque() {
	Deque* dq = (Deque*)malloc(sizeof(Deque));
	dq->front = dq->rear = NULL;
	dq->size = 0;
	return dq;
}
void push_front(Deque *q, int data) {
	Node* node = getNode(data);
	if (q->size == 0) {
		q->front = q->rear = node;
		q->size++;
		return;
	}
	node->next = q->front;
	q->front->prev = node;
	q->front = node;
	q->size++;
	return;
}
void push_back(Deque* q, int data) {
	Node* node = getNode(data);
	if (q->size == 0) {
		q->front = q->rear = node;
		q->size++;
		return;
	}
	q->rear->next = node;
	node->prev = q->rear;
	q->rear = node;
	q->size++;
	return;
}
void pop_front(Deque* q) {
	if (q->size == 0) {
		printf("-1\n");
		return;
	}
	Node* tmp = q->front;
	printf("%d\n", tmp->data);
	q->front = q->front->next;

	if (q->front == NULL)
		q->rear == NULL;
	else 
		q->front->prev = NULL;

	free(tmp);
	q->size--;
	return;
}
void pop_back(Deque* q) {
	if (q->size == 0) {
		printf("-1\n");
		return;
	}
	Node* tmp = q->rear;
	printf("%d\n", tmp->data);
	q->rear = q->rear->prev;

	if (q->rear == NULL)
		q->front == NULL;
	else
		q->rear->next = NULL;

	free(tmp);
	q->size--;
	return;
}
int main(void) {
	Deque* q = getDeque();
	int n, data;
	char ar[11];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		getchar();
		scanf("%s", ar);
		if (strcmp(ar, "push_front") == 0) {
			scanf("%d", &data);
			push_front(q, data);
			continue;
		}
		else if (strcmp(ar, "push_back") == 0) {
			scanf("%d", &data);
			push_back(q, data);
			continue;
		}
		else if (strcmp(ar, "pop_front") == 0) {
			pop_front(q);
			continue;
		}
		else if (strcmp(ar, "pop_back") == 0) {
			pop_back(q);
			continue;
		}
		else if (strcmp(ar, "size") == 0) {
			printf("%d\n", q->size);
			continue;
		}
		else if (strcmp(ar, "empty") == 0) {
			if (q->size == 0)
				printf("1\n");
			else
				printf("0\n");
			continue;

		}
		else if (strcmp(ar, "front") == 0) {
			if (q->size != 0)
				printf("%d\n", q->front->data);
			else
				printf("-1\n");
			continue;
		}
		else if (strcmp(ar, "back") == 0) {
			if (q->size != 0)
				printf("%d\n", q->rear->data);
			else
				printf("-1\n");
			continue;
		}
		else {
			printf("Invalid Operator.\n Ending Program.");
			break;
		}
	}
	return 0;
}
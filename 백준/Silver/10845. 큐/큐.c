#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Node {
	struct Node* next;
	int data;
}Node;
typedef struct Queue {
	struct Node* front, * rear;
	int size;
}Queue;
Node* getNode(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->next = NULL;
	node->data = data;
	return node;
}
Queue* getQueue() {
	Queue* q = (Queue*)malloc(sizeof(Queue));
	q->front = q->rear = NULL;
	q->size = 0;
	return q;
}
void push(Queue* q, int data) {
	Node* node = getNode(data);
	if (q->size == 0) {
		q->front = q->rear = node;
		q->size++;
		return;
	}
	q->rear->next = node;
	q->rear = node;
	q->size++;
	return;
}
void pop(Queue* q) {
	if (q->size == 0) {
		printf("-1\n");
		return;
	}
	Node* tmp = q->front;
	q->front = q->front->next;
	printf("%d\n", tmp->data);
	q->size--;
	free(tmp);
	return;
}
int main(void) {
	Queue* q = getQueue();
	int n, tmp;
	char op[6];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		getchar();
		scanf("%s", op);
		if (strcmp(op, "push") == 0) {
			scanf("%d", &tmp);
			push(q, tmp);
			continue;
		}
		else if (strcmp(op, "pop") == 0) {
			pop(q);
			continue;
		}
		else if (strcmp(op, "size") == 0) {
			printf("%d\n", q->size);
			continue;
		}
		else if (strcmp(op, "empty") == 0) {
			if (q->size == 0)
				printf("1\n");
			else
				printf("0\n");
			continue;
		}
		else if (strcmp(op, "front") == 0) {
			if (q->size != 0)
				printf("%d\n", q->front->data);
			else
				printf("-1\n");
			continue;
		}
		else if (strcmp(op, "back") == 0) {
			if (q->size != 0)
				printf("%d\n", q->rear->data);
			else
				printf("-1\n");
			continue;
		}
		else {
			printf("Invalid op code. Ending Program.");
			break;
		}
	}
	return 0;
}
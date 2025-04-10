#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
typedef struct Node {
	struct Node* next;
	int data;
}Node;
typedef struct Stack {
	struct Node* top;
	int size;
}Stack;
Stack* getStack() {
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	stack->top = NULL;
	stack->size = 0;
	return stack;
}
Node* getNode(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	return node;
}
void push(Stack* stack, int n) {
	Node* node = getNode(n);
	node->next = stack->top;
	stack->top = node;
	stack->size++;
	return;
}
int isEmpty(Stack* stack) {
	if (stack->size == 0)
		return 1;
	else
		return 0;
}
void pop(Stack* stack) {
	if (isEmpty(stack) == 1) {
		printf("-1\n");
		return;
	}
	Node* tmp = stack->top;
	int n = tmp->data;
	printf("%d\n", n);
	stack->top = stack->top->next;
	free(tmp);
	stack->size--;
	return;
}
void top(Stack* stack) {
	if (isEmpty(stack) == 1)
		printf("-1\n");
	else
		printf("%d\n", stack->top->data);
	return;
}
int main(void) {
	Stack* stack = getStack();
	int n, tmp;
	char op[6];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		getchar();
		scanf("%s", op);
		if (strcmp(op, "push") == 0) {
			scanf("%d", &tmp);
			push(stack, tmp);
			continue;
		}
		else if (strcmp(op, "pop") == 0) {
			pop(stack);
			continue;
		}
		else if (strcmp(op, "size") == 0) {
			printf("%d\n", stack->size);
			continue;
		}
		else if (strcmp(op, "empty") == 0) {
			int n = isEmpty(stack);
			printf("%d\n", n);
			continue;
		}
		else if (strcmp(op, "top") == 0) {
			top(stack);
			continue;
		}
		else {
			printf("No Such Operator.\nEnding Program.");
			break;
		}
	}
	return 0;
}
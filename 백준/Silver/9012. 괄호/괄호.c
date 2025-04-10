#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Node {
    struct Node* next;
    char data;
}Node;
typedef struct Stack {
    struct Node* top;
    int size;
}Stack;
Node* getNode(char data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->next = NULL;
    node->data = data;
    return node;
}
Stack* getStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    stack->size = 0;
    return stack;
}
void push(Stack *stack, char data) {
    Node* node = getNode(data);
    node->next = stack->top;
    stack->top = node;
    stack->size++;
    return;
}
int pop(Stack *stack) {
    if (stack->size == 0)
        return -1;
    Node* node = stack->top;
    stack->top = stack->top->next;
    stack->size--;
    free(node);
    return 0;
}
int main(void) {
    Stack* stack = getStack();
    int n;
    char ar[51] = { '\0', };
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        gets(ar);
        int len = strlen(ar);
        for (int j = 0; j < len; j++) {
            if (stack->top != NULL && stack->top->data == '(' && ar[j] == ')')
                pop(stack);
            else
                push(stack, ar[j]);
        }
        if (stack->size == 0)
            printf("YES\n");
        else {
            printf("NO\n");
            while (stack->size > 0)
                pop(stack);
        }
    }
    free(stack);
    return 0;
}
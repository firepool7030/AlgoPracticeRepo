#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Node {
    struct Node* next;
    int data;
}Node;
typedef struct Stack {
    struct Node* top;
    int size;
}Stack;
Node* getNode(int data) {
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
void push(Stack *stack, int data) {
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
    int rtn = node->data;
    stack->top = stack->top->next;
    stack->size--;
    free(node);
    return rtn;
}
int main(void) {
    Stack* stack = getStack();
    int n, tmp, cnt = 1, len = 0, *arr, flag = 0;
    char ar[100001 * 2];
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp);
        while (flag == 0 && (stack->top == NULL || stack->top->data < tmp)) {
            push(stack, cnt++);
            ar[len++] = '+';
        }
        while (flag == 0 && stack->top != NULL && stack->top->data >= tmp) {
            int num = pop(stack);
            if (arr[tmp] == num) {
                ar[len++] = '-';
                arr[tmp] = 0;
            }
            else {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0) {
        for (int i = 0; i < len; i++) {
            printf("%c\n", ar[i]);
        }
    }
    else {
        printf("NO\n");
    }
    return 0;
}
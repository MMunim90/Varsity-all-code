#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

typedef struct {
    char items[MAX_LENGTH];
    int top;
} Stack;

void push(Stack *stack, char c);
char pop(Stack *stack);
int isEmpty(Stack *stack);

int main() {
    char input[MAX_LENGTH];
    printf("Enter a string: ");
    fgets(input, MAX_LENGTH, stdin);

    Stack stack;
    stack.top = -1;

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] != '\n')
            push(&stack, input[i]);
    }

    printf("Reversed string: ");
    while (!isEmpty(&stack)) {
        printf("%c", pop(&stack));
    }
    printf("\n");

    return 0;
}

void push(Stack *stack, char c) {
    if (stack->top == MAX_LENGTH - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack->items[++stack->top] = c;
}

char pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack->items[stack->top--];
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

#include <stdio.h>
#define MAX_SIZE 1000

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack *s) {
    s->top = -1; // Initialize top to -1 indicating stack is empty
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to add an element to the stack
void push(Stack *s, int item) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->items[++s->top] = item; // Place item on top of the stack
    printf("%d pushed to stack\n", item);
}

// Function to remove an element from the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->items[s->top--]; // Remove the top item from the stack
}

// Function to get the top element of the stack
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is Empty\n");
        return -1;
    }
    return s->items[s->top];
}

// Function to print the stack contents from top to bottom
void printStack(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int main() {
    Stack s;
    initStack(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printStack(&s);
    printf("%d popped from stack\n", pop(&s));
    printStack(&s);
    printf("Top element is %d\n", peek(&s));

    return 0;
}

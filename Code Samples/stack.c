#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure for the stack
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// Function to create a new stack
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

// Function to check if the stack is full
int isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow! Cannot push element onto full stack.\n");
        return;
    }
    stack->top++;
    stack->items[stack->top] = value;
}

// Function to pop an element from the stack
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop element from empty stack.\n");
        return -1;
    }
    int value = stack->items[stack->top];
    stack->top--;
    return value;
}

int main() {
    // Create a new stack
    Stack* stack = createStack();

    // Push elements onto the stack
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    // Pop elements from the stack and print them
    printf("Popped elements: ");
    while (!isEmpty(stack)) {
        printf("%d ", pop(stack));
    }
    printf("\n");

    return 0;
}

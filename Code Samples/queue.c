#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure for the queue
typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Function to create a new queue
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Function to check if the queue is full
int isFull(Queue* queue) {
    return (queue->rear == MAX_SIZE - 1);
}

// Function to check if the queue is empty
int isEmpty(Queue* queue) {
    return (queue->front == -1 || queue->front > queue->rear);
}

// Function to increment the queue
void incrementQueue(Queue* queue, int newItem) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot increment.\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear++;
    }
    queue->items[queue->rear] = newItem;
}

int main() {
    Queue* queue = createQueue();

    // Increment the queue
    incrementQueue(queue, 10);
    incrementQueue(queue, 20);
    incrementQueue(queue, 30);

    // Print the elements of the queue
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%d ", queue->items[i]);
        }
        printf("\n");
    }

    return 0;
}

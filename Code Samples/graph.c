#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the adjacency list
typedef struct ListNode {
    int data;
    struct ListNode* next;
} ListNode;

// Define a structure for the adjacency list
typedef struct {
    ListNode** array;
    int size;
} Graph;

// Function to create a new graph with a given number of vertices
Graph* createGraph(int size) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    if (graph == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    graph->size = size;
    graph->array = (ListNode**)malloc(size * sizeof(ListNode*));
    if (graph->array == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    // Initialize each adjacency list as empty by setting all pointers to NULL
    for (int i = 0; i < size; ++i) {
        graph->array[i] = NULL;
    }
    return graph;
}

// Function to create a new node
ListNode* createNode(int data) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add an edge between two vertices in the graph
void addEdge(Graph* graph, int src, int dest) {
    // Add an edge from src to dest
    ListNode* newNode = createNode(dest);
    newNode->next = graph->array[src];
    graph->array[src] = newNode;

    // Since the graph is undirected, add an edge from dest to src as well
    newNode = createNode(src);
    newNode->next = graph->array[dest];
    graph->array[dest] = newNode;
}

// Function to print the adjacency list representation of the graph
void printGraph(Graph* graph) {
    printf("Adjacency list representation of the graph:\n");
    for (int i = 0; i < graph->size; ++i) {
        ListNode* current = graph->array[i];
        printf("Vertex %d: ", i);
        while (current != NULL) {
            printf("%d -> ", current->data);
            current = current->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int size = 5; // Number of vertices in the graph
    Graph* graph = createGraph(size);

    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    // Print the graph
    printGraph(graph);

    return 0;
}

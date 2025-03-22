// DSA - demonstration of queue data structure
#include <stdio.h>
#include <stdlib.h>
#define MAX 5  // Define size of queue

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {     
    int item;
    if (rear >= MAX - 1) {
        printf("Queue Overflow \n");
        return;
    }
    printf("Enter element to enqueue: ");
    scanf("%d", &item);
    
    if (front == -1) {
        front = 0;  // Initialize front pointer when first element is added
    }
    queue[++rear] = item;  // Corrected rear increment
    printf("Element enqueued: %d\n", item);
}

void dequeue() {   
    if (front == -1 || front > rear) {  // Fixed comparison
        printf("Queue Underflow \n");
        return;
    }
    printf("Element dequeued: %d\n", queue[front]);
    front++;
    if (front > rear) {
        front = rear = -1;  // Reset queue when empty
    }
}

void display() {  
    if (front == -1) {
        printf("Queue is empty \n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d\t", queue[i]);
    }
    printf("\n");
}

int main() {   
    int choice;
    while (1) {
        printf("\n1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Display \n");
        printf("4. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {                                     
            case 1: 
                enqueue();
                display();
                break;
            case 2: 
                dequeue();
                display();
                break;
            case 3: 
                display();
                break;
            case 4: 
                printf("Program exited \n");
                exit(0);
            default: 
                printf("Invalid choice \n");
                break;
        }
    }
    return 0;
}

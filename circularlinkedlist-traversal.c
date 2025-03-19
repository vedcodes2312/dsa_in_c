//circular linked list traversal
#include<stdio.h>  
#include<stdlib.h>  

// Circular linked list node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if (!temp) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    temp->data = data;
    temp->next = temp;  // Circular reference (points to itself)
    return temp;
}

// Function to traverse and print the circular linked list
void traverseList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Circular Linked List (Data | Node's Own Address | Node's Next Address):\n");
    
    do {
        printf("%d  |  %p  |  %p\n", temp->data, (void*)temp, (void*)temp->next);
        temp = temp->next;
    } while (temp != head);
    
    printf("\n");
}

// Function to free circular linked list memory
void freeList(struct Node* head) {
    if (head == NULL) return;
    
    struct Node* temp = head;
    struct Node* nextNode;

    do {
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    } while (temp != head);
}

int main()
{
    struct Node* head = newNode(1);
    struct Node* second = newNode(2);
    struct Node* third = newNode(3);

    // Linking nodes to make a circular linked list
    head->next = second;
    second->next = third;
    third->next = head;  // Circular connection

    // Print the linked list
    traverseList(head);

    // Free allocated memory
    freeList(head);

    return 0;
}

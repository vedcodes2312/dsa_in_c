//doubly linked list traversal
#include<stdio.h>
#include<stdlib.h>
//doubly linked list node
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
//function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if (!temp) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
//function to print and traverse a doubly linked list
void traverseList(struct Node* head){
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("\nDoubly Linked List (Data | Node's Own Address | Node's Prev Address | Node's Next Address):\n");

    while (temp != NULL) {
        printf("%d  |  %p  |  %p  |  %p\n", temp->data, (void*)temp, (void*)temp->prev, (void*)temp->next);
        temp = temp->next;
    }

    printf("\n");
}

//function to free the allocated memory
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = newNode(1);
    struct Node* second = newNode(2);
    struct Node* third = newNode(3);

   // linking nodes
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    //print and free the doubly linked list
    traverseList(head);
    freeList(head);

    return 0;
}

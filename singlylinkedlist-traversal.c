//singly linked list traversal
#include<stdio.h>  //preprocessor directive to include standard input output header file
#include<stdlib.h>  // preprocessor directive to include standard library header file  //malloc function is defined in this header file
//linked list node
struct Node {
    int data;
    struct Node* next;
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
    return temp;
}
//function to print and traverse a singly linked list
void traverseList(struct Node* head) {
    printf("linked list Node Data | Node's Own Address | Node's Next Address\n");
    while(head != NULL) {
        printf("%d  %p  %p | ", head->data, (void*)head, (void*)head->next);
        head = head->next;
    }
    printf("\n");
}
//function to free the linked list
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    struct Node* head = newNode(1);
    struct Node* second = newNode(2);
    struct Node* third = newNode(3);
    head->next = second;
    second->next = third;
    traverseList(head);
    freeList(head);
    return 0;
}


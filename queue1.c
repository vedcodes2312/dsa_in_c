// DSA - demonstration of queue data structure
#include<stdio.h> //header files
#include<stdlib.h>
#define MAX 5  //use of macro to define size of queue

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {     //function for enqueue operation - insertion of element in queue
int item;
if(rear >= MAX - 1) {
    printf("queue overflow \n");
    return;
}
printf("enter element to enqueue");
scanf("%d", &item);
if(front == -1) {
    front = 0;        //initialization of front pointer when first element is added
}
queue[rear++] = item;
/*            or we can write
rear = rear + 1
queue[rear] = item          */
printf("element enqueued : %d\n", item);
}

void dequeue() {   //function for dequeue operation - removal of element in queue
if(front = -1 || front > rear) {
    printf("queue underflow \n");
    return;
}
printf("element dequeued : %d",queue[front]);
front++;
if(front > rear) {
    front = rear = 1;  //reset queue when empty
}
}

void display()
{  //function to display the queue print in console
if(front == -1) {
    printf("queue is empty \n");
}
for(int i = front; i <= rear; i++) {
    printf("%d\t", queue[i]);
}
printf("\n");
}

int main()   //main function - soul of the program
{
    int choice;
    while(1) {
        printf("1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Display \n");
        printf("4. Exit \n");
        printf("enter your choice \n");
        scanf("%d", &choice);
        switch(choice) {    //swtich case for menu driven program                                   
            case 1: enqueue();
            display();
            break;
            case 2: dequeue();
            display();
            break;
            case 3: display();
            break;
            case 4: printf("program exited \n");
            exit(0);
            default: printf("invalid choice \n");
            break;
        }
    }
    return 0; //end of program
}

//program to demonstrate stack data structure 6/2/2025
#include<stdio.h>
#include<stdlib.h>
#define MAX 5 //size of stack
int stack[MAX];
int top = -1;

void push()
{
    int item;
    if(top == MAX - 1)
    {
        printf("stack overflow \n");
    }
    else {
        printf("enter element to push: ");
        scanf("%d",&item);
        stack[++top]=item;
        printf("element pushed %d \n",item);
    }
    for(int i=0; i<=top; i++)
    {
        printf("%d \t",stack[i]);
    }
    printf("\n");
}

void pop() //pop an element in stack
{
    if(top == -1) 
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("element popped: %d \n",stack[top--]);
        for(int i=0; i<=top; i++)
        {
            printf("%d \t",stack[i]);
        }
        printf("\n");
    }
}

void peep()  //function for  peep - top most element
{
    if(top == -1)
    {
        printf("stack is empty\n");
    }
    else 
    {
        printf("top most element is %d\n",stack[top--]);
        for(int i=0; i<=top; i++)
       {
        printf("%d \t",stack[i]);
       }
    }
}

void change() {
    int index, newValue;
    if(top == -1) {
        printf("Stack is empty. Cannot change any element.\n");
    } else {
        printf("Enter the index of the element to change (0 to %d): ", top);
        scanf("%d", &index);
        if(index < 0 || index > top) {
            printf("Invalid index.\n");
        } else {
            printf("Enter the new value for element at index %d: ", index);
            scanf("%d", &newValue);
            stack[index] = newValue;
            printf("Element at index %d changed to %d.\n", index, newValue);
        }
    }
    for(int i = 0; i <= top; i++) {
        printf("%d \t", stack[i]);
    }
    printf("\n");
}

int main()
{
    int choice;
    while(1) {
        printf("\n stack operations \n");
        printf(" 1. PUSH \n");
        printf(" 2. POP \n");
        printf(" 3. PEEP \n");
        printf(" 4. CHANGE \n");
        printf(" 5. EXIT \n");
        printf("enter your choice :");
        scanf("%d",&choice);
        
        switch(choice) {
            case 1:   push();
            break;
            
            case 2:  pop();
            break;
            
            case 3:  peep();
            break;
            
            case 4:  change();
            break;
            
            case 5:  
                printf("Exiting program.\n");
                exit(0); // Exit the program
            
            default:
                printf("invalid choice \n");
                break;
        }
    }
    return 0;
}

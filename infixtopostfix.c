// polish notation - infix to postfix conversion
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX 100 // Maximum size of stack

int top = -1; // Stack top
char stack[MAX]; // Stack array

// Function to check if stack is empty
int isEmpty() {
    return top == -1;
}

// Function to push an element onto the stack
void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = ch;
}

// Function to pop an element from the stack
char pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Function to peek at the top element of the stack
char peek() {
    if (isEmpty()) {
        return '\0';
    }
    return stack[top];
}

// Function to check operator precedence
int precedence(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '^') return 3;
    return 0;
}

// Function to convert infix expression to postfix
void infixToPostfix(char *infix, char *postfix) {
    int i = 0, j = 0;
    char ch;

    while (infix[i] != '\0') {
        ch = infix[i];

        // If the character is an operand, add it to output
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }
        // If the character is '(', push it to stack
        else if (ch == '(') {
            push(ch);
        }
        // If the character is ')', pop and output until '(' is found
        else if (ch == ')') {
            while (!isEmpty() && peek() != '(') {
                postfix[j++] = pop();
            }
            pop(); // Remove '(' from stack
        }
        // If an operator is found
        else {
            while (!isEmpty() && precedence(peek()) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
        i++;
    }

    // Pop remaining operators in stack
    while (!isEmpty()) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0'; // Null-terminate the postfix expression
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);
    return 0;
}
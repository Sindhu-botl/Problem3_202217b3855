#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define stack size

int stack[MAX];
int top = -1;

// Function to push an element into the stack
void push(int val) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = val;
        printf("%d pushed into stack\n", val);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("The popped element is %d\n", stack[top]);
        top--;
    }
}

// Function to display the elements in the stack
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("The elements in STACK\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, val;

    while (1) {
        printf("\nSTACK OPERATIONS USING ARRAY\n");
        printf("-----------------------------\n");
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("Enter the Choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a value to be pushed:");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}

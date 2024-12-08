#include <stdio.h>
#define max 4

int stack_arr[max];
int top = -1;

void push(int data) {
    if (top == max - 1) {
        printf("Stack overflow\n");
    } else {
        top = top + 1;
        stack_arr[top] = data;
        printf("%d pushed onto stack\n", data);
    }
}


void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("%d popped from stack\n", stack_arr[top--]);
    }
}


void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", stack_arr[top]);
    }
}


int isFull() {
    return (top == max - 1);
}


int isEmpty() {
    return (top == -1);
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack contents: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack_arr[i]);
        }
        printf("\n");
    }
}

int main() {

    push(1);
    push(2);
    push(4);
    pop();
    push(5);
    push(6); 
    peek();
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    if (isFull()) {
        printf("Stack is full\n");
    } else {
        printf("Stack is not full\n");
    }

    display();


    return 0;
}

#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push() {
    int x;

    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &x);

    stack[++top] = x;
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", stack[top--]);
}

void peep() {
    int pos;

    printf("Enter position from top: ");
    scanf("%d", &pos);

    if (top - pos + 1 < 0)
        printf("Invalid Position\n");
    else
        printf("Element = %d\n", stack[top - pos + 1]);
}

void change() {
    int pos, value;

    printf("Enter position from top: ");
    scanf("%d", &pos);

    printf("Enter new value: ");
    scanf("%d", &value);

    if (top - pos + 1 < 0)
        printf("Invalid Position\n");
    else
        stack[top - pos + 1] = value;
}

void display() {
    if (top == -1) {
        printf("Stack Empty\n");
        return;
    }

    printf("Stack Elements:\n");

    for (int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main() {
    int ch;

    do {
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.PEEP");
        printf("\n4.CHANGE");
        printf("\n5.DISPLAY");
        printf("\n6.EXIT");

        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peep(); break;
            case 4: change(); break;
            case 5: display(); break;
            case 6: printf("Exit\n"); break;
            default: printf("Invalid Choice\n");
        }

    } while (ch != 6);

    return 0;
}
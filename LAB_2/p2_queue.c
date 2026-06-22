#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void insert() {
    int item;

    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &item);

    if (front == -1)
        front = 0;

    queue[++rear] = item;
}

void delete() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front++]);
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }

    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

int main() {
    int ch;

    do {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
        }
    } while (ch != 4);

    return 0;
}
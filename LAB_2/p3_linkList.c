#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert() {
    struct Node *newnode;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;
}

void delete() {
    if (head == NULL) {
        printf("List Empty\n");
        return;
    }

    struct Node *temp = head;
    printf("Deleted: %d\n", temp->data);

    head = head->next;
    free(temp);
}

void display() {
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
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
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value) 
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } 
    else 
    {
        rear->next = newNode;
        rear = newNode;
    }
    printf("%d inserted into queue.\n", value);
}
void dequeue() 
{
    if (front == NULL) 
    {
        printf("Queue is empty!\n");
    } 
    else 
    {
        struct Node *temp = front;
        printf("%d deleted from queue.\n", front->data);
        front = front->next;
        if (front == NULL)
            rear = NULL;
        free(temp);
    }
}

void display() {
    if (front == NULL) {
        printf("Queue is empty!\n");
    } else {
        struct Node *temp = front;
        printf("Queue elements: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main() {
    int choice, value;
    do {
        printf("\n1. Insert  2. Delete  3. Display  4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}


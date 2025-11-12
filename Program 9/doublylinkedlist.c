#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head = NULL;
void insertAtEnd(int value)
{
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL)
    {
     head = newNode;
     return;
    }
    struct Node* temp = head;
    while (temp->next != NULL)
    {
     temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void displayForward()
{
 if(head == NULL) 
 {
  printf("List is empty.\n");
  return;
 }
 struct Node* temp = head;
 printf("Doubly Linked List (forward): ");
 while (temp != NULL)
 {
  printf("%d ", temp->data);
  temp = temp->next;
 }
 printf("\n");
}
void displayBackward() 
{
 if (head == NULL) 
 {
  printf("List is empty.\n");
  return;
 }
 struct Node* temp = head;
 while (temp->next != NULL)
 {
  temp = temp->next;
 }
 printf("Doubly Linked List (backward): ");
    while (temp != NULL) 
    {
     printf("%d ", temp->data);
     temp = temp->prev;
    }
    printf("\n");
}
int main() {
 int choice, value;
 while (1) 
 {
  printf("\n--- Doubly Linked List ---\n");
  printf("1. Insert at end\n2. Display forward\n3. Display backward\n4. Exit\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch (choice) 
  {
   case 1:
    printf("Enter value to insert: ");
    scanf("%d", &value);
    insertAtEnd(value);
    break;
   case 2:
    displayForward();
    break;
   case 3:
    displayBackward();
    break;
   case 4:
    printf("Exiting...\n");
    exit(0);
   default:
    printf("Invalid choice! Try again.\n");
   }
  }
 return 0;
}


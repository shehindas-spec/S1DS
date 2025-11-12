#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node* next;
};
struct Node* head=NULL;
void insert(int value)
 {
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->next = NULL;
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
}

void display() 
{
 if(head==NULL)
  {
   printf("List is empty.\n");
   return;
  }
  struct Node* temp = head;
  printf("Linked List: ");
  while (temp != NULL) 
  {
   printf("%d -> ", temp->data);
   temp = temp->next;
  }
   printf("NULL\n");
}

int main() 
{
 int choice, value;
 while (1) 
 {
  printf("\n--- Singly Linked List ---\n");
  printf("1. Insert\n2. Display\n3. Exit\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch (choice) 
  {
   case 1:
    printf("Enter value to insert: ");
    scanf("%d", &value);
    insert(value);
   break;
   case 2:
    display();
    break;
   case 3:
    printf("Exiting...\n");
    exit(0);
   default:
    printf("Invalid choice! Try again.\n");
   } 
 }
return 0;
}


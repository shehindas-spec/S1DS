#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;           
    struct Node* next;   
};
struct Node* top=NULL;
void push(int value)
{
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data=value;
 newNode->next=top;
 top=newNode;
 printf("%d pushed to stack\n",value);
}
void pop()
{
 if (top == NULL) 
 {
  printf("Stack is empty! Nothing to pop.\n");
  return;
 }
 struct Node* temp = top;
 top = top->next;
 printf("%d popped from stack.\n", temp->data);
 free(temp);
}
void display()
{
 if (top == NULL) 
 {
  printf("Stack is empty.\n");
  return;
 }
 printf("Stack elements are: ");
 struct Node* temp = top;
 while (temp != NULL) 
 {
  printf("%d ", temp->data);
  temp = temp->next;
 }
 printf("\n");
}
int main()
{
 int choice, value;
 while (1)
 {
 printf("\n--- Stack using Linked List ---\n");
 printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
  switch (choice) 
  {
   case 1:
    printf("Enter value to push: ");
    scanf("%d", &value);
    push(value);
    break;
   case 2:
    pop();
    break;
   case 3:
    display();
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

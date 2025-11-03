#include<stdio.h>

int stack[100], size=5;
int top=-1;

void push()
{
 if(top==size-1)
 {
  printf("Stack is full\n");
 }
 else
 {
  int val;
  printf("Enter the value\n");
  scanf("%d",&val);
  top++;
  stack[top]=val;
  printf("%d pushed to the stack\n");
 }
}
void pop()
{
 if(top == -1)
 {
  printf("Stack is empty\n");
 }
 else
 {
  printf("%d popped from stack\n", stack[top]);
  top--;
 }
}
void display()
{
int i
 if(top == -1)
 {
  printf("Stack is empty\n");
 }
 else
 {
  printf("Stack elelment\n");
  for(i=top; i>=top;top--)
  {
   printf(" %d ",stack[i]);
  }
 }
}
int main()


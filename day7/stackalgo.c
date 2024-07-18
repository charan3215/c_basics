#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top=-1;
//Function to check stack is empty
int is_empty()
{
	return top == -1;
}
//Function to check stack is full 
int is_full()
{
	return top == MAX_SIZE-1;
}
// Function to add an element
void push(int item)
{
	if(is_full())
	{
		printf("Stack overflow \n");
	}
	stack[++top]=item;
	printf("Pushed %d onto stack \n",item);
}
//Function to pop an element
int pop()
{
	if(is_empty()){
		printf("Stack underflow\n");
		return -1;
	}
	return stack[top--];
}

int main()
{
	push(10);
	push(20);
	push(30);
	push(40);

	printf("popped element: %d\n",pop());
	printf("popped element: %d\n",pop());

	return 0;
}


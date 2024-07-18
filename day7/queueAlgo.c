#include<stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE-1];
int top=-1;

int is_empty()
{
	return top ==-1;
}

int is_full()
{
	return top == MAX_SIZE-1;
}
void push(int item)
{
	if(is_full())
	{
		printf("Stack overflow \n");
	}
	queue[++top]=item;
	printf("pushed %d onto queue \n",item);
}

int pop()
{
	int low=-1;
	if(is_empty())
	{
		printf("Stack underflow \n");
		return -1;
	}
	return queue[++low];
}

int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);

	printf("popped element: %d\n",pop());
	printf("popped element: %d\n",pop());
	
	return 0;
}

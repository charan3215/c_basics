#include<stdio.h>

int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);

int main()
{
	int (*operation)(int,int);

	operation=add;

	printf("Result of addition: %d\n",operation(5,3));

	operation=subtract;

	printf("Result of subtraction: %d\n",operation(5,3));

	operation=multiply;
	printf("Result of multiplication: %d\n",operation(5,3));

	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int subtract(int a,int b)
{
	if(a>b)
	{
		return a-b;
	}
	else
	{
		return b-a;
	}
}
int multiply(int a,int b)
{
	return a*b;
}

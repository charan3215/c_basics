#include<stdio.h>
void doublenumber(int* a,int* b);
int main()
{
	int num1,num2;
	printf("\nEnter num1\n");
	scanf("%d",&num1);
	printf("\nEnter num2\n");
	scanf("%d",&num2);
	printf("Before doubled the numbers are %d and %d\n",num1,num2);
	doublenumber(&num1,&num2);
	printf("After doubled the numbers are %d and %d\n",num1,num2);
}
void doublenumber(int* a,int* b)
{
	*a=2*(*a);
	*b=2*(*b);
	
}

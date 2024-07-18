#include<stdio.h>
int main()
{
	int arr[10];
	int* ptr=arr;
	int sum=0;
	printf("Enter 10 elements 0f the array:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",ptr+i);
	}
	for(int j=0;j<10;j++)
	{
		sum=sum+(*ptr+j);
	}
	printf("sum :%d",sum);
}

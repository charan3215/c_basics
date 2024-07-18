#include<stdio.h>
void countEvenOdd(int* p,int l ,int *x,int *y);
void main()
{
	int arr[]={1,13,21,5,34,62};
	int length=sizeof(arr)/sizeof(arr[0]);
	int m=0,n=0;
	countEvenOdd(arr,length,&m,&n);
	printf("count of even numbers are %d\n",m);
	printf("count of odd numbers are %d\n",n);
}
void countEvenOdd(int* p,int l,int *x,int *y)
{
	for(int i=0;i<l;i++)
	{
		if(*(p+i)%2==0)
		{
			(*x)++;

		}
		else
		{
			(*y)++;

		}
	}
			
}

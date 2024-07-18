#include<stdio.h>
void reverseArray(int* a,int l);
int main()
{
	int arr[]={1,3,5,7};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("Before sorting...");
	for(int i=0;i<length;i++)
	{
		printf("\n%d ",arr[i]);
	}
	reverseArray(arr,length);
}
void reverseArray(int* a,int l)
{
	printf("\nAfter sorting...");
	for(int i=(l)-1;i>=0;i--)
	{
		printf("\n%d ",a[i]);
	}
	
}


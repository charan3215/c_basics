#include<stdio.h>
void swap(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low,j=high;
	int temp=0;
	int res=0;
	while(i<j)
	{
		while(a[i]<=pivot && i<=high-1)
		{
			i++;
		}
		while(a[j]>pivot && j>=low+1)
		{
			j--;
		}
		if(i<j)
		{
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[low],&a[j]);
	return j;
}

void Quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int partitionIndex=partition(arr,low,high);
		Quicksort(arr,low,partitionIndex-1);
		Quicksort(arr,partitionIndex+1,high);
	}
}
int main()
{
	int arr[]={10,16,8,12,15,6,3,9,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("original array: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	Quicksort(arr,0,n-1);
	printf("\nsorted array: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
		

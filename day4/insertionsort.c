#include<stdio.h>
void insertionSort(int arr[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
int main()
{
	int arr[]={100,85,25,75,150};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	insertionSort(arr,n);

	printf("Sorted Array : \n");
	for(int k=0;k<n;k++)
	{
		printf("%d ",arr[k]);
	}
	printf("\n");
	return 0;
}



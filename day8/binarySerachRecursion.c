#include<stdio.h>

void  binarySearch(int arr[],int low,int high,int key){
	static int count=0;
	if(low<=high)
	{
		count++;
		int mid=(low+high)/2;
		
		if(arr[mid]==key)
		{
			printf("Element: %d found at index: %d by the count: %d\n",key,mid,count);
			return;
		}
		else if(arr[mid]<key)
		{
			return binarySearch(arr,mid+1,high,key);
		}
		else
		{
			return binarySearch(arr,low,mid-1,key);
		}
	}
	printf("Element not found\n");
}

void LinearSearch(int arr[],int n,int target)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		count++;
		if(arr[i]== target)
		{
			printf("Element: %d found  at index: %d by the count: %d \n",target,i,count);
			return;
		}
	}
	
}

int main()
{
	int arr[]={3,6,8,12,14,17,25,29,31,36,42,47,53,55,62};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key1 = 12;

	binarySearch(arr,0,n-1,key1);
	LinearSearch(arr,n,key1);
	printf("==================================\n");
	int key2 = 36;
	binarySearch(arr,0,n-1,key2);
	LinearSearch(arr,n,key2);
}


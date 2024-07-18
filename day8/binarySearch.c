#include<stdio.h>
void BinarySearch(int n,int arr[],int key)
{
	int low, high,mid;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;

		if(arr[mid] == key)
		{
			printf("Element %d found at index %d\n",key,mid);
			return ;
		}

		else if(arr[mid]<key)
		{
			low=mid+1;
		}
		else if(arr[mid]>key)
		{
			high=mid -1;
		}
	}
	printf("Element not found\n");
}
int main()
{
	int arr[]={3,6,8,12,14,17,25,29,31,36,42,47,53,55,62};
	int key;
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter element you want to search : ");
	scanf("%d",&key);
	BinarySearch(n,arr,key);
}





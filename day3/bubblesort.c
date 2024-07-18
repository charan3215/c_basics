#include<stdio.h>
int main()
{
	int arr[]={12,3,26,44,7,89};
	int length=sizeof(arr)/sizeof(arr[0]);
	int temp=0;
	for(int i=0;i<length;i++)
	{
		for(int j=i+1;j<length;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	
	}
	printf("After sorting...\n");
	for(int k=0;k<length;k++)
	{
		printf("%d\t",arr[k]);
	}
}

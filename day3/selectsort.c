#include<stdio.h>

void main()
{
	int arr[]={12,3,14,23,8,53,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp=0;
	for(int i=n-1;i>0;i--)
	{
		int maxindex=i;
		for(int j=0;j<i;j++)
		{
			if(arr[j]>arr[maxindex])
			{
				maxindex=j;
			}
		}
		temp=arr[maxindex];
		arr[maxindex]=arr[i];
		arr[i]=temp;
		

	printf("After sorting---->\n");
	for(int k=0;k<n;k++)
	{
		printf(" %d\t",arr[k]);
	}
	printf("\n");
	}
}

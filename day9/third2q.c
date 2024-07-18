#include<stdio.h>

void targetSum(int* arr,int target){
	int length=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<length;i++)
	{
		for(int j=i+1;j<length;j++)
		{
			if((arr[i]+arr[j])==target)
			{
				printf("[%d,%d]\n",i,j);
				return;
			}
		}
	}


}
int main()
{
	int array[]={2,7,11,15};
	int target =9;
	targetSum(array,target);

}

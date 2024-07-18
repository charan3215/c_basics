#include<stdio.h>
int Findnum(int *nums,int length)
{
	int temp=0;
	for(int i=0;i<length;i++)
	{
		temp ^= nums[i];
		
	}
	return temp;
}
int main()
{
	
	int nums[]={4,1,2,1,2};
	int n=sizeof(nums)/sizeof(nums[0]);
	

	printf("The value is %d \n",Findnum(nums,n));
}

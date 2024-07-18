#include<stdio.h>
#include<stdbool.h>
int main()
{
	int num;bool temp;
	printf("Enter number : ");
	scanf("%d",&num);
	for(int i=2;i<=num/2;i++)
	{
		if((num/i)==i)
		{
			temp=true;

		}
	}
	if(temp)
	{
		printf("Perfect Number\n");
		return 0;
	}
	else
	{
		printf("Not a perfect Number\n");
		return 0;
	}
}

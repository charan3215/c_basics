#include<stdio.h>
void rotate(int arr[][3],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[i][n-j-1];
			arr[i][n-j-1]=temp;
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

}

int main()
{
	int matrix[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int size=3;

	rotate(matrix,size);
}

